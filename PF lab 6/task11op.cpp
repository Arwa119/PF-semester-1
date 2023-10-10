#include<iostream>
using namespace std;
string checkSpeed(float a);
main(){
    float a;
    cout<<"Enter the speed: ";
    cin>>a;
    cout<<checkSpeed(a);
}
string checkSpeed(float a){
    string d;
       if (a<=10)
       {
         d="slow";
       }
        if (a>10&&a<=50)
       {
         d="average";
       }
        if (a>50&&a<=150)
       {
         d="fast";
       }
        if (a>150&&a<=1000)
       {
        d="ultra-fast";
       }
       if(a>1000){
        d="extremely fast"; 
       }
       return d;
        
}
