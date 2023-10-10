#include<iostream>
using namespace std;
string OddishOrEvenish(int n);
main()
{
    int n;
    cout<<"Enter a five-digit number: ";
    cin>>n;
   string result=OddishOrEvenish(n);
   cout<<result;
}
string OddishOrEvenish(int n){
    int a=n%10;
    n=n/10;
    int s=n%10;
    n=n/10;
    int d=n%10;
    n=n/10;
    int f=n%10;
    n=n/10;
    int sum=a+s+d+f+n;
    if(sum%2==0){
        return "Evenish";
    }
    else{
        return "Oddish";
    }
    
}
