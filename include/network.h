#ifndef NETWORK_H
#define NETWORK_H

#include <QTcpSocket>
#include <QtNetwork>

class NetClient : public QObject
{
	Q_OBJECT
	
public slots:
	

private:

	QTcpSocket *tcpSocket;
	//QtNetworkSession *QtNetworkSession;
};

#endif