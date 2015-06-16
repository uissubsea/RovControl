#ifndef NETWORK_H
#define NETWORK_H

#include <QTcpSocket>
#include <QObject>
#include <QAbstractSocket>
#include <QByteArray>
#include <QDebug>
#include "joystickhandler.h"

class NetClient : public QObject
{
	Q_OBJECT
	
public: 
	NetClient(QObject *parent = 0);
	bool connectToRov(QString, int);
	void disconnectFromRov();

private slots:
	//vuoid sendAxisData(QMap<int, int>);
	//void sendButtonData(QMap<int, int>);
	//void sendHatData(QMap<int, int>);
	void sendAxisData(QByteArray);
	void connected();
	void disconnected();
	void readyRead();

private:

	QTcpSocket *socket;
	bool runThread;
	bool send;
	QString dataToSend;

	void run();

};

#endif