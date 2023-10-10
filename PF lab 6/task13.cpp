#include<iostream>
using namespace std;
float lowestPrice(int k,string a);
main(){
    int k;
    string a;
    cout<<"Enter the number of kilometers: ";
    cin>>k;
    cout<<"Enter the period of the day (day/night): ";
    cin>>a;
    cout<<"Lowest price for "<<k<<" kilometers: "<<lowestPrice(k,a)<<" EUR";
}
float lowestPrice(int k,string a){
    float taxiD,taxiN,bus,train;
    taxiD=(k*0.79)+0.7;taxiN=(k*0.90)+0.7;
    if (k>=20)
    {
        bus=k*0.09;
        return bus;
    }
    if (k>=100)
    {
        train=k*0.06;
        return train;
    }
    if(k<20&&a=="day"){
        return taxiD;
    }
    if (k<20&&a=="night")
    {
        return taxiN;
    }
}