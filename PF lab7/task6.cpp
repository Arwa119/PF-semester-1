#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1,int number2);
main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"GCD: "<<calculateGCD(n1,n2)<<endl;
    cout<<"LCM: "<<calculateLCM(n1,n2);
}
int calculateGCD(int number1, int number2){
    int a=99,gcd;
    while(a<=99){
        if(number1%a==0&&number2%a==0){
            gcd=a;
            break; 
        }
        a--;
    }
    return gcd;
}
int calculateLCM(int number1,int number2){
    int d=(number1*number2);
    int call=calculateGCD(number1,number2);
    int lcm=d/call;
    return lcm;
}
