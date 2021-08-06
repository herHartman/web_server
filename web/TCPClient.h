//
// Created by chopk on 06.08.2021.
//

#ifndef WEB_SERVER_TCPCLIENT_H
#define WEB_SERVER_TCPCLIENT_H

class TCPSocket;

class TCPClient {
private:
    TCPSocket* m_tcpSocket;
public:
    explicit TCPClient(TCPSocket *tcpSocket);
    void Connect();
    void Send(const void *msg);
};


#endif //WEB_SERVER_TCPCLIENT_H
