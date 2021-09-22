#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <fcntl.h>
#include <pthread.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <curl/curl.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PAYLOAD ""
#define BUFFER_SIZE 2000
#define KEY ""

#define IP ""
#define PORT

#define PORT_START 1
#define PORT_END 1000

unsigned int DEVICE_COUNT = 0;
pthread_mutex_t lock;

const char USUARIO[64] = "senha";
const char SENHA[64] = "foda";
