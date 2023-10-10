#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n,m;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the second number: ";
    cin>>m;
    cout<<"The minimum of "<<n<<" and "<<m<<" is: "<<min(n,m);
    return 0;
}