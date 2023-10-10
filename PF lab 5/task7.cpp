#include<iostream>
using namespace std;
bool IsSymmetrical(int n);
main()
{
    int n;
    cout<<"Enter a three-digit number: ";
    cin>>n;
    bool a=IsSymmetrical(n);
    if(a==0){
        cout<<"The number is not symmetrical.";

    }
    if (a==1)
    {
        cout<<"The number is symmetrical.";
    }
    
}
bool IsSymmetrical(int n){
    int s=n%10;
    n=n/10;
    int d=n%10;
    n=n/10;
    if (s==n)
    {
        return true;
    }
    else{
        return false;
    }
}

