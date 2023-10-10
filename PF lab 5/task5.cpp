#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    float disc;
    cout<<"Enter the value of a: ";
    cin>>a;
     cout<<"Enter the value of b: ";
    cin>>b; 
    cout<<"Enter the value of c: ";
    cin>>c;
    disc=(b*b)-(4*a*c);
    float use=sqrt(disc);
    float root1,root2;
    if(disc==0){
         root1=-b/2*a;
        cout<<"Solution: x = "<<root1; 
    }
    if(disc<0){
        root1=(-b/(2*a));
        float s=0;
        s=((sqrt(-disc))/(2*a));
        root2=(-b/2*a);
         cout<<"Complex Solutions: x = "<<root1<<" + "<<s<<"i and x = "<<root1<<" - "<<s<<"i"; 
    }
    if(disc>0){
        root1=(-b+(sqrt(disc)))/(2*a);
        root2=(-b-(sqrt(disc)))/(2*a);
        cout<<"Solutions: x = "<<root1<<" and x = "<<root2;
    }
    return 0;

}