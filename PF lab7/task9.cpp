#include<iostream>
using namespace std;
int calculatePrice(int money, int year);
main(){
    int money;
    int year;
    cout<<"Enter Money: ";
    cin>>money;
    cout<<"Enter Year: ";
    cin>>year;
    int remain=calculatePrice(money,year);

    if (remain>0)
    {
       cout<<"Yes! He will live a carefree life and will have "<<remain<<" dollars left.";

    }
    else{
        cout<<"He will need "<<(-remain)<<" dollars to survive.";
    }

}
int calculatePrice(int money, int year){
    int y=1800;
    int cAge=17;
    int moneyOdd;
    int TotalmoneyOdd=0,countEven=0;
    while (y<=year)
    {   
        cAge=cAge+1;
        if (y%2!=0)
    {
     moneyOdd=12000+(50*cAge);
     TotalmoneyOdd=TotalmoneyOdd+moneyOdd;
    }
    if (y%2==0)
    {
        countEven++;
    }
    
    y++;
    }
    int moneyEven=countEven*12000;
    int total=moneyEven+TotalmoneyOdd;
    int  remains=money-total;
    return remains;
}
