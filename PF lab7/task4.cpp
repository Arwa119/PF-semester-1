#include<iostream>
using namespace std;
int frequencyChecker(int number,int digit);
main(){
    int n,d;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the digit to check: ";
    cin>>d;
    int fre=frequencyChecker(n,d);
    cout<<"Frequency: "<<fre;
}
int frequencyChecker(int number,int digit){
   int a=0,count=0,s=0;
    
     while (number!=0)
    {
         s=number%10;
        number=number/10;
        if (s==digit)
        {
            count=count+1;
        }
        a=a-1;
    }
    return count;
}

