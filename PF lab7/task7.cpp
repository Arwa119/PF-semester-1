#include<iostream>
#include<iomanip>
using namespace std;
void result(int count);
main(){
    int count;
    cout<<"Enter numbers count: ";
    cin>>count;
    result(count);
}
void result(int count){
    int n;
    float p1=0,p2=0,p3=0,p4=0,p5=0;
  for (int i = 0; i < count; i++)
  {
    cout<<"Enter a number: ";
    cin>>n;
    if (n<200)
    {
        p1=p1+1;
    }
  if (n>=200&&n<=399)
    {
        p2=p2+1;
    }
     if (n>=400&&n<=599)
    {
        p3=p3+1;
    }
    if (n>=600&&n<=799)
    {
        p4=p4+1;
    }
     if (n>=800)
    {
        p5=p5+1;
    }
  }
  float a1=p1/count;
  float a2=p2/count;
  float a3=p3/count;
  float a4=p4/count;
  float a5=p5/count;
    float p1r=a1*100;
    float p2r=a2*100;
    float p3r=a3*100;
    float p4r=a4*100;
    float p5r=a5*100;
    cout<<fixed<<setprecision(2);
    cout<<p1r<<"%"<<endl;
    cout<<p2r<<"%"<<endl;
    cout<<p3r<<"%"<<endl;
    cout<<p4r<<"%"<<endl;
    cout<<p5r<<"%"<<endl;
}


