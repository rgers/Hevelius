#ifndef HEVELIUS_SERVER_H
#define HEVELIUS_SERVER_H

#include <QStringList>
#include <QTcpServer>

class Hevelius_Server : public QTcpServer
{
    Q_OBJECT

public:
    Hevelius_Server(QObject *parent = 0);

protected:
    void incomingConnection(int socketDescriptor);

private:

};

#endif
