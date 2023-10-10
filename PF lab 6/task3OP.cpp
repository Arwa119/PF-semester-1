#include<iostream>
using namespace std;
float perimeter(char p,float q);
main(){
    float n;
    char a;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>a;
    cout<<"Enter the value: ";
    cin>>n;
    cout<<"The perimeter is: "<<perimeter(a,n);
}
float perimeter(char p,float q){
    if (p=='s')
    {
        return (4*q);
    }
    if (p=='c')
    {
        return (6.28*q);
    }
    if (p=='t')
    {
        return (3*q);
    }
    if (p=='h')
    {
        return (6*q);
    }
    
}

