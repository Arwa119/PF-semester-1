#include<iostream>
using namespace std;
void printName(string name);
main()
{
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	printName(name);
}
void printName(string name)
{
while(true)
{
	cout<<name<<endl;
}
}	