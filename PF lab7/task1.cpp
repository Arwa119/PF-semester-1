#include<iostream>
using namespace std;
void printTable(int number);
main(){
int n;
cout<<"Enter a number: ";
cin>>n;
printTable(n);
}
void printTable(int number) {
    
    for (int i = 1; i <= 10 ; i++)
    {
        int a=i*number;
        cout<<number<<" x "<<i<<" = "<<a<<endl;
    }
    
}
