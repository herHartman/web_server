//
// Created by chopk on 06.08.2021.
//

#ifndef WEB_SERVER_TCPSERVER_H
#define WEB_SERVER_TCPSERVER_H

class TCPSocket;

class TCPServer {
private:
    TCPSocket *m_tcpSocket{};
public:
    explicit TCPServer(TCPSocket* tcpSocket);
    void Listen();
    void Accept();
    void Send(const void *msg);
};


#endif //WEB_SERVER_TCPSERVER_H
