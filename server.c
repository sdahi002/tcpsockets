/*
 * server.c
 *
 *  Created on: 15 Oct 2020
 *      Author: shashankdahiya
 */

#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>

int main(){

	char server_message[256] = "I AM SERVER";
	//create socket
	int server_socket;
	server_socket = socket(AF_INET, SOCK_STREAM, 0);

	//define server address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9999);
	server_address.sin_addr.s_addr = INADDR_ANY; //ANY CONSTANST RESOLVE TO ANY IP ON MACHINE

	//bind the socket to IP & port
	bind(server_address, (struct sockaddr*) &server_address, sizeof(server_address));

	//listen to connection
	listen(server_socket, 2);

	//hold client socket that we are accepting on listening
	int client_socket;
	client_socket = accept(server_socket, NULL, NULL);
	//send the message
	send(client_socket, server_message, sizeof(server_message), 0);

	//close the socket
	close(server_socket);

	return 0;
}
