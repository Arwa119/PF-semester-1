#include<iostream>
using namespace std;
main()
{
string name;
cout<<"Enter the name of the cricket team: ";
cin>>name;
int win;
int loss;
int draw;
cout<<"Enter the number of wins: ";
cin>>win;
cout<<"Enter the number of draws: ";
cin>>draw;
cout<<"Enter the number of losses: ";
cin>>loss;
int a=(3*win)+draw;
cout<<name<<" has obtained "<<a<<" points in the Asia Cup tournament.";

}