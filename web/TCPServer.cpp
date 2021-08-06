//
// Created by chopk on 06.08.2021.
//

#include "TCPServer.h"
#include "TCPSocket.h"

TCPServer::TCPServer(TCPSocket *tcpSocket)
    : m_tcpSocket(tcpSocket) {}

void TCPServer::Accept()
{

}


void TCPServer::Listen()
{

}

void TCPServer::Send(const void *msg)
{
    m_tcpSocket->Send(msg);
}
