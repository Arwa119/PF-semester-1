#include<iostream>
using namespace std;
main()
{
float volt;
float curr;
cout<<"Enter voltage (in volts): ";
cin>>volt;
cout<<"Enter current (in amperes): ";
cin>>curr;
int power;
power=curr*volt;
cout<<"The power is "<<power<<" watts.";
}