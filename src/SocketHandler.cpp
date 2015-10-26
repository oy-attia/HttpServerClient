#include "SocketHandler.h"

SocketHandler::SocketHandler(int socket_fd){
	this->socket_fd = socket_fd;
}

SocketHandler::~SocketHandler(){
	closeSocket();
}
        
int SocketHandler::read(char* buffer, int len){
	return recv(socket_fd, buffer, len, 0);
}

int SocketHandler::write(char* buffer, int len){
	return send(socket_fd, buffer, len, 0);
}

int SocketHandler::closeSocket(){
	return close(socket_fd);
}
        