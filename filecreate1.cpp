// This file creates two department files with the offered courses and the minimum required GPA
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream myfile ("DepartmentA.txt"); //Creating file 1
	if(myfile.is_open()) //The Data entered is similar to the illustrated data in the description
	{
	   
	   myfile <<"A1#3.5"<<endl; 
	   myfile<<"A2#3.8"<<endl;
	   myfile<<"A3#3.6";
	   myfile.close();
	 }
	 else
	 cout<<"Unable to open a file";
	 ofstream yourfile("DepartmentB.txt");
	 if(yourfile.is_open())
	 {
		   yourfile<<"B1#3.6"<<endl;
		   yourfile<<"B2#3.8"<<endl;
		   yourfile<<"B3#3.7"<<endl;
		   yourfile.close();
	  }
	  else
	  cout<<"File cannot be opened";
	 return 0;
}
