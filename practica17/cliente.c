//Parra Arroyo Fernando Marcos 
//practica 17
//Cliente 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>


#define SERVER "localhost"
#define PORT 5433

int main(int argc, char *argv[])
{
  struct sockaddr_in server; // información de las direcciones ip
  struct hostent *sp;
  int sd; //Descriptor de archivo para el socket
  int n;
  char buf[1024];

  sd = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP); // se crea el socket

  memset((char *) &server, 0, sizeof(struct sockaddr_in)); // llena los primeros bytes correspondientes al tamaño de la estructura con ceros
  server.sin_family = AF_INET; // se establece como protocolo de direcciones a IPV4 
  server.sin_port = htons((u_short) PORT); //se establece el puerto de conexión
  //htons traduce un short integer del orden de bytes del host al orden de bytes de la red
  sp = gethostbyname(SERVER); //regresa la estructura de tipo hostent para el nombre de host dado
  memcpy(&server.sin_addr, sp->h_addr, sp->h_length); //copia el la direccion del host a la estructura del server

  
  //Inicia una conexión desde el socket del descriptor de archivo al socket especificado
  //utilizando la direccion y longitud
  connect(sd, (struct sockaddr *) &server, sizeof(struct sockaddr_in)); 

  while(1)
  {
    printf("\nCliente dice: ");
    fgets(buf, 1024, stdin); // se lee de la línea de comandos y se guarda en el buffer
    send( sd, buf, strlen(buf), 0 );// se envía el contenido del buffer por el socket


    n = recv(sd, buf, sizeof(buf), 0);
    while (n > 0) 
    {
      printf("\nServidor dice: %s",buf);
      printf("\nCliente dice: ");
      fgets(buf, 1024, stdin); // se lee de la línea de comandos y se guarda en el buffer
      send( sd, buf, strlen(buf), 0 );// se envía el contenido del buffer por el socket
      n = recv(sd, buf, sizeof(buf), 0);
    } 
  }
  close(sd); // se cierra el descriptor de archivo del socket
  exit(0);
}
