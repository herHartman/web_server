//
// Created by chopk on 06.08.2021.
//

#include "TCPClient.h"
#include <sys/types.h>
#include <sys/socket.h>
#include "TCPSocket.h"

TCPClient::TCPClient(TCPSocket *tcpSocket)
    : m_tcpSocket(tcpSocket) {}

void TCPClient::Connect()
{

}

void TCPClient::Send(const void *msg)
{
    m_tcpSocket->Send(msg);
}


