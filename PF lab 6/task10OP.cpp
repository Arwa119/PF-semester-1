#include<iostream>
using namespace std;
bool areSameNumbers(int a,int b,int c);
main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
     cout<<"Enter the second number: ";
    cin>>b;
     cout<<"Enter the third number: ";
    cin>>c;
    cout<<areSameNumbers(a,b,c);
}
bool areSameNumbers(int a,int b,int c){
    if ((a==b)&&(b==c))
    {
        return true;
    }else{
        return false;
    }
    
}
