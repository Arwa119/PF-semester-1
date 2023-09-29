#include<iostream>
using namespace std;
void calculateFuel(float d);
main()
{
	float d;
	cout<<"Enter the distance: ";
	cin>>d;
	calculateFuel(d);
}
void calculateFuel(float d)
{
	float fuel=10*d;
	if(fuel<100)
{
	cout<<"Fuel needed: 100";
}
	if(fuel>=100)
{
	cout<<"Fuel needed: "<<fuel;
}
}