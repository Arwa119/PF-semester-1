#include<iostream>
#include<cmath>
using namespace std;
string checkAlphabetCase(char a);
main(){
    char a;
    cout<<"Enter a character (A/a): ";
    cin>>a;
    cout<<checkAlphabetCase(a);

}
string checkAlphabetCase(char a){
    if(a=='a'){
        string s="You have entered small a";
        return s;
    }
    if(a=='A'){
        string d="You have entered Capital A";
        return d;
    }
}
