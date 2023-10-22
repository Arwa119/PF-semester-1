#include<iostream>
using namespace std;
void generateFibonacci(int length);
main(){
    int length;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>length;
    generateFibonacci(length);

}
void generateFibonacci(int length){
    int n=3;
    int r,a=0,b=1   ;
    if (length==1)
    {
        cout<<"0";
    }
    if (length==2)
    {
        cout<<"0, 1";
    }
   else{
    cout<<"0, 1";
   }
   
    while (n<=length)
    {
        r=a+b;
        cout<<", "<<r;
        a=b;
        b=r;
        n=n+1;
    }
    
}
