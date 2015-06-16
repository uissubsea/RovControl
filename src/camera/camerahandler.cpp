#include "camerahandler.h"
#include <QDebug>

CameraHandler::CameraHandler(){
	discoverCameras();

	cameraIndex = 0; /* Default camera index */

}

void CameraHandler::discoverCameras(){
	/* This function will discover all cameras on the network */
	//error = busManager.DiscoverGigECameras(cameraInfo, );

	error = busManager.GetNumOfCameras(&numCameras);

	std::cout << "Number of cameras detected: " << numCameras << std::endl;

}

bool CameraHandler::initCameraByIp(int ip[]){
	for (int idx = 0; idx < 4; idx++){
		ipAddress.octets[idx] = ip[idx];
	}

	error = busManager.GetCameraFromIPAddress(ipAddress, &guid);

	if(error != FlyCapture2::PGRERROR_OK){
		qDebug() << "Could not get camera with IP";
		return false;
	}

	error = camera.Connect(&guid);
	if (error != FlyCapture2::PGRERROR_OK)
    {
    	qDebug() << "Unable to connect to camera";
        return false;
    }

    return true;
}

bool CameraHandler::initCamera(int idx = 0){
	/* Try to get camera */
	error = busManager.GetCameraFromIndex(idx, &guid);

	if(error != FlyCapture2::PGRERROR_OK){
		qDebug() << "Could not get camera from index";
		return false;
	}

	error = camera.Connect(&guid);
	if (error != FlyCapture2::PGRERROR_OK)
    {
    	qDebug() << "Unable to connect to camera";
        return false;
    }

    std::cout << "Connected to camera" << std::endl;

	return true;
}

bool CameraHandler::configureCamera(){

}

void CameraHandler::run(){
	camera.StartCapture();
	qDebug() << "Started Capture";
	unsigned int rowBytes;
	while(1){
		//qDebug() << "Start of loop";
		
		error = camera.RetrieveBuffer(&rawImage);
		if(error != FlyCapture2::PGRERROR_OK){
			continue;
		}

		//qDebug() << "In image loop";

		rawImage.Convert(FlyCapture2::PIXEL_FORMAT_BGR, &rgbImage);

		rowBytes = (double)rgbImage.GetReceivedDataSize()/(double)rgbImage.GetRows();

		cv::Mat cvImageMatrix = cv::Mat(rgbImage.GetRows(), rgbImage.GetCols(), CV_8UC3, rgbImage.GetData(), rowBytes);

		image = Mat2QImage(cvImageMatrix);

		//cameraWindow->setPicture(QPixmap::fromImage(image));


		emit gotCameraImage(image); /* emit signal containing camera image */

		//msleep(10);
	}
}

QImage CameraHandler::Mat2QImage(cv::Mat const& src){
	/* Thanks to Marek R */
	QImage image = QImage((const uchar *) src.data, src.cols, src.rows, src.step, QImage::Format_RGB888);
	image.bits();
	return image;
}

void CameraHandler::setCameraIndex(int idx){
	cameraIndex = idx;
}