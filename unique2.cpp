#include<iostream>
using namespace std;
int setBit(int n,int pos)
{
	return ((n&(1<<pos))!=0);
}
void unique(int arr[],int n)
{
	int xorsum=0;
	for(int i=0;i<n;i++)
	{
		xorsum=xorsum^arr[i];
	}
	int setbit=0;
	int pos=0;
	int tempxor=xorsum;
	while(setbit!=1)
	{
		setbit = 1 & xorsum;
		pos++;
		xorsum=xorsum>>1;
	}
	int newxor=0; 
	for(int i=0;i<n;i++)
	{
		if(setBit(arr[i],pos-1))
		{
			newxor=newxor^arr[i];
		}
	}
	cout<<newxor<<endl;
	cout<<(newxor^tempxor)<<endl;
}
int main()
{
	int arr[]={1,2,3,4,5,7,4,3,2,1};
	unique(arr,10);
	return 0;
}