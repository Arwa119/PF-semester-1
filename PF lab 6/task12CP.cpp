#include<iostream>
using namespace std;
float totalIncome(string a,int b,int c);
main(){
    string a;
    int b,c;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>a;
    cout<<"Enter the number of rows: ";
    cin>>b;
    cout<<"Enter the number of columns: ";
    cin>>c;
    cout<<totalIncome(a,b,c);
}
float totalIncome(string a,int b,int c){
    float value;
    if (a=="Premiere")
    {
        value=b*c*12;
    }
    if (a=="Normal")
    {
        value=b*c*7.50;
    }
    if (a=="Discount")
    {
        value=b*c*5.00;
    }
    return value;
}
