
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <sstream>
using namespace std;
int no_of_words = 0, p = 0;
int no_of_lines = 0;
int i = 0;

void word_extraction()
{
	string line ;
	string arr[1000];
	cout<<"Enter"<<no_of_lines+1<<"line"<<endl;
	while(std::getline(std::cin, line))
	{
			no_of_lines+=1;
			cout<<"Enter "<<no_of_lines+1<<"  line"<<endl;
			if(line == "^D")
				break;
	
			int x;
		
			stringstream ssin(line);
			while (ssin.good() && i < 1000) 
			{
				ssin >> arr[p];
				++i;
				p++;
				no_of_words += i;
				i=0;	
			}
			fstream file; // use fstream (for reading and writing
			file.open("file.txt",ios::app);
			file << line;
			
			
			file.close();

	
		cout<<"First is"<<arr[0];
		/*for (x = 0; x <p; x++)
		 {
			cout << arr[x] << endl;
		 }*/
}
no_of_lines-=1;
cout<<no_of_words<<"        " <<no_of_lines;
}


	int main() 
	{
		
		word_extraction();
		return 0;

	}
