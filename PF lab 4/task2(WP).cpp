#include<iostream>
using namespace std;
void add();
main()
{
	add();
	add();
}
void add()
{
	int number1,number2,sum;
	cout<<"Enter first Number: ";
	cin>>number1;
	cout<<"Enter Second number: ";
	cin>>number2;
	sum=number1+number2;
	cout<<"Sum: "<<sum<<endl;
}
