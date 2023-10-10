#include<iostream>
using namespace std;
int greatNumber(float a,float b);
main(){
    float a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    greatNumber(a,b);
    cout<<greatNumber(a,b);
}
int greatNumber(float a,float b){
    if (a>b)
    {
        return 1;

    }
    else{
        return 0;
    }
    
}