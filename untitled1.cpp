#include <iostream>
using namespace std;
int main()
{
	int a[5],*ptr;
	cout<<"Enter the values";
	for(int i=0;i<5;i++)
		cin>>a[i];
	ptr=a;
	cout<<endl<<"the result is";
	for (int i=0;i<5;i++)
		cout<<a[i];
	cout<<*ptr;
	return 0;
}
