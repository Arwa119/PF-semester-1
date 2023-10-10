#include<iostream>
using namespace std;
string checkTitle(int a,char g);
main(){
    int a;char g;
    cout<<"Enter your age: ";
    cin>>a;
    cout<<"Enter your gender (m/f): ";
    cin>>g;
    cout<<"Your personal title is: "<<checkTitle(a,g);
}
string checkTitle(int a,char g){
if (a>=16&&g=='m')
{
    return "Mr.";
}
if (a<16&&g=='m')
{
    return "Master";
}
if (a>=16&&g=='f')
{
    return "Ms.";
}
if (a<16&&g=='f')
{
    return "Miss";
}

}
