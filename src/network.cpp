#include "network.h"


NetClient::NetClient(QObject *parent){
	socket = new QTcpSocket(this);

	connect(socket, SIGNAL(connected()), this, SLOT(connected()));
	connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
	connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

	send = false;

}

bool NetClient::connectToRov(QString ip = "192.168.1.20", int port = 50000){
 	socket->connectToHost(ip, port);

 	if(socket->waitForConnected(5000)){
 		qDebug() << "Connected to ROV";
 		send = true;
 		return true;
 	}
 	else{
 		qDebug() << "Failed to connect";
 		return false;
 	}

}

void NetClient::disconnected(){
	qDebug() << "Disconnected";
}

void NetClient::connected(){
	qDebug() << "Connected to ROV!";
}

void NetClient::readyRead(){
	qDebug() << socket->readAll();
}

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

	//qDebug() << arrayToSend;
	if (send == true){
		//socket->write(arrayToSend);
	}
	//qDebug() << socket->readAll();
}

void NetClient::disconnectFromRov(){
	socket->disconnectFromHost();
}