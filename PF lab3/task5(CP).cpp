#include<iostream>
using namespace std;
main()
{
	string name;
	float matric;
	float inter;
	float ecat;
	float aggregate;
	cout<<"Enter the student's name: ";
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>matric;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>inter;
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>ecat;
	aggregate=((ecat/400)*0.5)+(0.4*(inter/550))+(0.1*(matric/1100));
	aggregate=aggregate*100;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";
}