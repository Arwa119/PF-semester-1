#include<iostream>
using namespace  std;
int digitSum(int number);
main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of digits: "<<digitSum(n);

}
int digitSum(int number){
    int sum=0;
    while (number!=0)
    {
        int s=number%10;
        sum=sum+s;
        number=number/10;
    }
    return sum;
}
