#include<iostream>
using namespace std;
int main()
{
	int side1,side2,side3;
	cin>>side1>>side2>>side3;
	if(side1==side2==side3)
	{
		cout<<"Equialteral triangle"<<endl;
	}
	else if(side1==side2||side2==side3||side1==side3)
	{
		cout<<"Isosceles triangle"<<endl;
	}
	else
	{
		cout<<"Scalene triangle"<<endl;
	}
	return 0;
}