#include "network.h"


NetClient::NetClient(){
	socket = new QTcpSocket(this);
	runThread = true;

	joystickHandler = new JoystickHandler();
	joystickHandler->start();


	/* Connect Joystick signals to send routines */

	//connect(joystickHandler, SIGNAL(axisValues(QMap<int, int>)), this, SLOT(sendAxisData(QMap<int, int>)));
	//connect(joystickHandler, SIGNAL(buttonValues(QMap<int,int>)), this, SLOT(sendButtonData(QMap<int, int>)));
	connect(joystickHandler, SIGNAL(axisValues(QByteArray)), this, SLOT(sendAxisData(QByteArray)));
}

bool NetClient::connectToRov(QString ip = "192.168.1.20", int port = 50000){
 	socket->connectToHost(ip, port);

 	if(socket->waitForConnected(5000)){
 		qDebug() << "Connected to ROV";
 		return true;
 	}
 	else{
 		qDebug() << "Failed to connect";
 		return false;
 	}
}


void NetClient::run(){
	/* this is the main loop */
	
	while(!connectToRov()){
		qDebug() << "Failed to connect, Trying again";
	}

	while(runThread){
		/* Main program loop */
		/* Get joystick values and print them */
		//qDebug() << joystickHandler->getJoystickData();



		
		msleep(15);
	}

	socket->disconnectFromHost();
}

/*
void NetClient::sendButtonData(QMap<int, int> data){
	dataToSend = "Btn-";
	//Iterate over Qmap and append
	//dataToSend.append(itemtoAppend);
}


void NetClient::sendHatData(QMap<int, int> hatValues){

}
*/
void NetClient::sendAxisData(QByteArray arrayToSend){
	/*
	QMapIterator<int, int> i(axisValues);
	while(i.hasNext()){
		i.next();
		qDebug() << i.key() << " Value: \t " << i.value();
	}
	*/
	// Get Axis data
	//QMap<int, int> values;
	//values = joystickHandler->getAxisValues();
	//QMapIterator<int, int> i(values);
	//while(i.hasNext()){
	//	i.next();
	//	qDebug() << i.key() << " Value: \t " << i.value();
	//}
	socket->write(arrayToSend);
	socket->readAll();
}

void NetClient::disconnectFromRov(){
	runThread = false;
}

bool NetClient::sendDataToRov(QString dataToSend){
	//socket->write(dataToSend.toUtf8());
}