#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float base,angle;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin>>base;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    float rad=(angle/57.2958);
    float a=((tan(rad))*base);
    cout<<"The height of the tree is: "<<a<<" feet";
}