#include<iostream>
using namespace std;
int totalDigits(int n);
main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Total number of digits: "<<totalDigits(n);
}
int totalDigits(int n){
    int a=0;
    if (n==0)
    {
        a=1;
    }
    
    while (n!=0)
    {
        n=n/10;
        a++;
    }
    return a;
}
