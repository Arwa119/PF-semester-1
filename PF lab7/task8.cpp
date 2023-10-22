#include<iostream>
using namespace std;
int calculateMoney(int age,int priceT,int priceW);
main(){
    int age;
    int  priceT,priceW;
    int remain;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter the price of the washing machine: ";
    cin>>priceW;
    cout<<"Enter the unit price of each toy: ";
    cin>>priceT;
    int cash= calculateMoney(age,priceT,priceW);
    if (cash>=priceW)
    {
        remain=cash-priceW;
        cout<<"Yes!\n"<<remain;
    }
    else{
        remain=priceW-cash;
        cout<<"No!\n"<<(remain+3);
    }

}
int calculateMoney(int age,int priceT,int priceW){
    int ageEven=age/2;
    int n=1;
    int ageOdd=age-ageEven;
    int cashE=0,sum=0;
   while (n<=age)
   {
    if (n%2==0)
    {
        cashE=cashE+10;
        sum=sum+cashE;
    }
    n++;
   }
    int cashGift=sum-ageEven;
    int cashToys=ageOdd*priceT;
    int totalcash=cashGift+cashToys;
    return totalcash;
}
