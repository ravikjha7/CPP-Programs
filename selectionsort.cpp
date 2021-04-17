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
	int key,check,temp;
	for(int i=0;i<n-1;i++)
	{	
		key=arr[i];
		check=i;
		for(int j=i;j<n;j++)
		{
			if(key>arr[j])
			{
				key=arr[j];
				check=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[check];
		arr[check]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}