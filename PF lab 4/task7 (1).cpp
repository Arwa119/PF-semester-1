#include<iostream>
using namespace std;
void evenOrOdd(int n);
main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	evenOrOdd(n);
}
void evenOrOdd(int n)
{
	if(n%2==0)
{
	cout<<"Number "<<n<<" is even";
}
	if(n%2!=0)
{
	cout<<"Number "<<n<<" is odd";
}
}