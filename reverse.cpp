#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		b[i]=a[9-i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}