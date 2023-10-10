#include<iostream>
using namespace std;
float discount(string d,string m ,float amount);
main(){
    float amount;
    string a,b;
    cout<<"Enter Purchase Day: ";
    cin>>a;
    cout<<"Enter Purchase Month: ";
    cin>>b;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    cout<<"Payable Amount after discount: "<<discount(a,b,amount);
    
}
float discount(string d,string m ,float amount){
    
    float price;
    if(d=="Sunday"&&(m=="October"||m=="March"||m=="August")){
        price=amount-(amount*0.1);
        return price;
    }
    if(d=="Monday"&&(m=="November"||m=="December")){
    price=amount-(amount*0.05);
    return price;
    
    }
     else{
        return amount;
    }
}