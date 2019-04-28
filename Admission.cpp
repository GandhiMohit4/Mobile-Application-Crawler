#include <iostream>
#include <fstream>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <stdlib.h>
//char A1[50],A2[5;
//char B[3][50];
//int counter=0;
//void storing(char line[] ,char dept[])
//{
	//  if (strcmp(dept,"A"))
	  //{
	//	strncpy  ( A ,line,50);
//	  }
	//else
	 //B [counter][]=line;

//}	 
using namespace std;
int main(int argc, char *argv[])
{
	  char line[50],dept[2]; // buffer to send data
	  struct sockaddr_in server_address;
	   int sock_connection,portno,n,new_connection;
	  cout<<"Phase 1 server has begun" <<endl;
	  
	  
	  cout<<"Admission office has  port 3637 (3300+337)";
	  sock_connection=socket(AF_INET,SOCK_STREAM,0);
	  if (sock_connection<0)
	     {
	     cout<<"Connection could not be established";
		 exit(0);
	  	  }
	
     	  portno=3637;
		  server_address.sin_family =AF_INET;
		  server_address.sin_addr.s_addr=INADDR_ANY;
		  server_address.sin_port = htons (portno);
	
	
		  if(bind(sock_connection,(struct sockaddr*)&server_address,sizeof (server_address))<0)
		  {
			    cout<<"Biniding could not be established";
	    	    exit(0);
		  }   
	
	
	      listen(sock_connection,2);
	      new_connection=accept (sock_connection,(struct sockaddr *)0,0);
	     
	      //cout<<dept;
			  
	      for (int i=1;i<=3;i++)
			{
				 n=recv(new_connection,dept,2,0);
			  bzero(line,50);
			  n=recv(new_connection,line,50,0);
			    if( n<=0)
			     {
				  cout<<"Cannot read from socket";
				  exit(0);
			     }
			   else
			    {
				  			      cout<<endl<<line ;
				  			    //  A=*line
	//			  			      strncpy(A,line,50);
			    }  
		    }
		    cout<<endl<<"End of Phase 1 for admission office"<<endl;
	  	  return 0;
	}

