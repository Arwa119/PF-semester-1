#include<iostream>
using namespace std;
void calculatePayableAmount(string day,float amount);
main()
{
	float amount;
	string day;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	calculatePayableAmount(day,amount);
}
void calculatePayableAmount(string day,float amount)
{
	if(day=="Sunday")
{
	float total=amount-(amount*0.1);
	cout<<"Payable Amount: $"<<total;
}
	if(day!="Sunday")
{
	cout<<"Payable Amount: $"<<amount;
}
}