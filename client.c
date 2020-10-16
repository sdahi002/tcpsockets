/*
 * client.c
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
	//create socket
	int network_socket;
	network_socket = socket(AF_INET, SOCK_STREAM, 0);

	//address to remote server - other socket
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9999);
	server_address.sin_addr.s_addr = INADDR_ANY;

	// &_ -> address of _; where _ is variable
	// *_ -> value at _; where _ is address

	int connection_status = connect(network_socket, (struct sockaddr*) &server_address, sizeof(server_address));
	//0 is ok; -1 error

	if (connection_status == -1){
		printf("Error in the connection\n\n");
	}

	//send / receive data now
	char server_response[256];
	recv(network_socket, &server_response, sizeof(server_response), 0);

	// print out response
	printf("Response: %s", server_response);

	//close socket
	close(network_socket);

	return 0;
}
