//
// Created by chopk on 06.08.2021.
//

#ifndef WEB_SERVER_TCPSOCKET_H
#define WEB_SERVER_TCPSOCKET_H


class TCPSocket {
private:
    int m_domain{};
    int m_type{};
    int m_protocol{};
    int m_socketFd{};
public:
    TCPSocket(int domain, int type, int protocol);
    void InitSocket();
    void Bind() const;
    void Send(const void *msg);
    [[nodiscard]] inline int GetSocketFD() const { return m_socketFd; }
};


#endif //WEB_SERVER_TCPSOCKET_H
