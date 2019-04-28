
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
using namespace std;
int no_of_words = 0, p = 0;
int no_of_lines = 0;
int i = 0;

void line_input()
{
	string line ;
	std::getline(std::cin, line);
	//p++;
	string arr[1000];
	int x;
	
	
	stringstream ssin(line);
	while (ssin.good() && i < 1000) {
		ssin >> arr[i];
		++i;
	}
	no_of_words += i;
	for (x = 0; x < i; x++) {
		cout << arr[x] << endl;
		
	}

	
}
	int main() {
		int x;
		int c;
		cout << "You can ENTER 8 to  enter the next line";
	//	do {
			line_input();
			
			no_of_lines += 1;
		//			cin >> c;
		//} while (c!=8);
		no_of_words -= 1;

			cout << "No of words are " << no_of_words;
		
		cout << "Enter 1 to input a line";
		
		cin >> x;
		return 0;
	}
