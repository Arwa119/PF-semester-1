#include<iostream>
using namespace std;
float findGreatest(float a,float b,float c);
main(){
float a,b,c;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
cout<<"Enter the third number: ";
cin>>c;
cout<<"The greatest number among "<<a<<", "<<b<<", and "<<c<<" is: "<<findGreatest(a,b,c);
}
float findGreatest(float a,float b,float c){
    int s;
    if (a>b&&a>c)
    {
    s=a;
    }
    if (b>a&&b>c)
    {
        s=b;
    }else{
        return s=c;
    }
    
    return s;
    
}
