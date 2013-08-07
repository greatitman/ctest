#include<stdio.h>

int main()
{
	struct sockaddr_in server_addr;

	int serverfd = socket(AF_INET,SOCKET_STREAM);//SOCK_DGRAM

	memset(server_addr, sizeof(struct sockaddr_t));
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = INADDR_LOOPBACK;//INADDR_ANY;
	server_addr.sin_port = 9090;
	bind(serverfd,server_addr);
	listen(serverfd,50);

}
