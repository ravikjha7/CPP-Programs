#include<iostream>
using namespace std;
int main()
{
	int arr[7];
	for(int i=0;i<7;i++)
	{
		cin>>arr[i];
	}
	int xorsum=0;
	for(int i=0;i<7;i++)
	{
		xorsum=xorsum^arr[i];
	}
	cout<<xorsum;
	return 0;
}