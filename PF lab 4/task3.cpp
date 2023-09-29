#include<iostream>
using namespace std;
void howManyStickers(int n);
main()
{
	int n;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>n;
	howManyStickers(n);
}
void howManyStickers(int n)
{
	int sticker=(n*n)*6;
	cout<<"Number of stickers needed: "<<sticker;
}