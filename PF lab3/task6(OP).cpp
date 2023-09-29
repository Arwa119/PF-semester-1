#include<iostream>
using namespace std;
main()
{
	float MB;
	float bits;
	cout<<"Enter the size in megabytes (MB): ";
	cin>>MB;
	bits=MB*1024*1024*8;
	cout<<MB<<" MB is equivalent to "<<bits<<" bits.";
}
