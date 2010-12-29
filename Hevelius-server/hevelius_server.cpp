#include "hevelius_server.h"
#include "hevelius_thread.h"

#include <stdlib.h>

Hevelius_Server::Hevelius_Server(QObject *parent)
    : QTcpServer(parent)
{

}

void Hevelius_Server::incomingConnection(int socketDescriptor)
{
    Hevelius_Thread *thread = new Hevelius_Thread(socketDescriptor, this);
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}
