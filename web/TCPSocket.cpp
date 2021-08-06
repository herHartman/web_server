//
// Created by chopk on 06.08.2021.
//

#include "TCPSocket.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <cerrno>
#include <netinet/in.h>

TCPSocket::TCPSocket(int domain, int type, int protocol)
    : m_domain(domain), m_type(type), m_protocol(protocol)
{
}

void TCPSocket::InitSocket()
{
    int result = socket(this->m_domain, this->m_type, this->m_protocol);

    if (result < 0) {
        switch (errno) {

        }
    }

    this->m_socketFd = result;
}

void TCPSocket::Bind() const
{
    const sockaddr_in *address = new sockaddr_in();
    int result = bind(this->m_socketFd, reinterpret_cast<const sockaddr *>(address), sizeof (*address));

    if (result < 0) {
        switch (errno) {

        }
    }
}

void TCPSocket::Send(const void *msg)
{

}
