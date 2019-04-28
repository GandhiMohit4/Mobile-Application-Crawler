#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
 #include <netinet/in.h>
#include <netdb.h>
#include <string.h>

using namespace std;
int main(int argc ,char *argv[])
{
	  char line[50]; // buffer to send data
	  struct sockaddr_in server_address;
	  struct hostent *server;
	  int nooflines=3;//n; 
	 int sock_connection;long portno;
	  cout<<"Phase 1 client has begun" <<endl;
	  
	  portno=3637;
	  sock_connection=socket(AF_INET,SOCK_STREAM,0);
	  	  if (sock_connection<0)
		{
	       cout<<"Connection could not be established";
	        exit(0);
	     }   
	    cout<< "Department B has TCP port no 3637 (3300+337)"<<endl;
	  
	   server=gethostbyname (argv[1]);
	   if (server== 0)
	     {
			 cout<<"Error";
			exit(0);
		  }
		  
		  server_address.sin_family =AF_INET;
		  memcpy(&server_address.sin_addr,server->h_addr,server->h_length);
		  server_address.sin_port = htons(portno);
		  
		  if(connect(sock_connection,(struct sockaddr *) &server_address,sizeof (server_address))<0)
		  {
			    cout<<"Connection could not be established";
			    exit(0);
		}  
	    cout<<"Department B is now connected to admission office"<<endl;  
	  ifstream myfile;
	  myfile.open("DepartmentB.txt");
	  for (int i=1; i<=nooflines;i++)
	  {
			myfile.getline(line,50);
			cout<<line<<endl;
			if ( send (sock_connection,line, sizeof(line),0)<0)
			   cout<<" Sending failed";
			 bzero (line,50);
			
		 }
		  cout<<endl<<"Department B has sent programs to admission office"<<endl;
				  	  return 0;
	}
