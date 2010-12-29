#ifndef HEVELIUS_THREAD_H
#define HEVELIUS_THREAD_H

#include <QThread>
#include <QTcpSocket>

 class Hevelius_Thread : public QThread
 {
     Q_OBJECT

 public:
     Hevelius_Thread(int socketDescriptor, QObject *parent);

     void run();

 signals:
     void error(QTcpSocket::SocketError socketError);

 private:
     int socketDescriptor;
 };

 #endif
