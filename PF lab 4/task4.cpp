#include<iostream>
using namespace std;
void add(float a,float b);
void sub(float a,float b);
void mult(float a,float b);
void div(float a,float b);
main()
{
	float num1,num2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	if(op=='+')
{
	add(num1,num2);
}
	if(op=='-')
{	
	sub(num1,num2);
}	 
	if(op=='*')
{
	mult(num1,num2);
}
	if(op=='/')
{
	div(num1,num2);
}
}
void add(float a,float b)
{
	float sum=a+b;
	cout<<"Addition: "<<sum;
}
void sub(float a,float b)
{
	float subt=a-b;
	cout<<"Subtraction: "<<subt;
}
void mult(float a,float b)
{
	float mul=a*b;
	cout<<"Multiplication: "<<mul;
}
void div(float a,float b)
{
	float divd=a/b;
	cout<<"Division: "<<divd;
}
	