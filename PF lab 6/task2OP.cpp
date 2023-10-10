#include<iostream>
using namespace std;
bool parityAnalysis(int a);
main(){
    int a;
    cout<<"Enter a 3-digit number: ";
    cin>>a;
    cout<<parityAnalysis(a);

}
bool parityAnalysis(int a){
    int n=a;
    int p1=a%10;
    a=a/10;
    int p2=a%10;
    a=a/10;
    int sum=a+p1+p2;
    if (n%2==0)
    {
        if (sum%2==0)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
    else{
        if (n%2!=0)
        {
            if (sum%2!=0)
            {
                return true;
            }else{
                false;
            }
        }
        
    }

}