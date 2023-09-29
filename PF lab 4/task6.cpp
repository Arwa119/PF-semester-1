#include<iostream>
using namespace std;
void test(int marks);
main()
{
	int marks;
	cout<<"Enter your score: ";
	cin>>marks;
	test(marks);
}
void test(int marks)
{
	if(marks>50)
{
	cout<<"Pass";
}
	if(marks<=50)
{
	cout<<"Fail";
}
}