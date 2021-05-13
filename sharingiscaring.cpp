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
	int j;
	for(int i=0;i<n;i++)
	{	j=i+1;
		while(arr[i]!=0&&j<n)
		{
			arr[i]--;
			arr[j]++;
			j++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}