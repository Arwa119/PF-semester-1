#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n,m;
    cout<<"Enter the base number: ";
    cin>>n;
    cout<<"Enter the exponent: ";
    cin>>m;
    cout<<n<<" raised to the power "<<m<<" is: "<<pow(n,m);
    return 0;
}