#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	int check[max];
	for(int i=0;i<max;i++)
	{
		check[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		check[arr[i]-1]++;
	}
	for(int i=0;i<max;i++)
	{
		cout<<check[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<max;i++)
	{
		if(check[i]==1)
		{
			printf("%d",i+1);
		}
	}
	return 0;
}