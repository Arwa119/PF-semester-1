#include<iostream>
using namespace std;
main()
{
int p;
cout<<"Enter the current world population: ";
cin>>p;
int n;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>n;
int d;
d=(30*12*n)+p;
cout<<"The population in three decades will be: "<<d;



}