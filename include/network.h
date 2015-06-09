#ifndef NETWORK_H
#define NETWORK_H

#include <QTcpSocket>
#include <QtNetwork>
#include <QThread>
#include <QNetworkSession>
#include <QByteArray>
#include "joystickhandler.h"

class NetClient : public QThread
{
	Q_OBJECT
	
public: 
	NetClient();
	bool connectToRov(QString, int);
	void disconnectFromRov();
	bool sendDataToRov(QString);

private slots:
	//vuoid sendAxisData(QMap<int, int>);
	//void sendButtonData(QMap<int, int>);
	//void sendHatData(QMap<int, int>);
	void sendAxisData(QByteArray);

private:

	QTcpSocket *socket;
	QNetworkSession *QtNetworkSession;
	JoystickHandler *joystickHandler;
	bool runThread;

	QString dataToSend;

	void run();

};

#endif