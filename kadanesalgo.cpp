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
	int sum=0,max=0;
	for(int i=0;i<n;i++)
	{
		if(sum>0)
		sum=sum+arr[i];
		else
		{
		sum=0;
		sum=sum + arr[i];
		}
		if(sum>max)
		{
			max=sum;
		}
	}
	cout<<max;
	return 0;
}