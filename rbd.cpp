#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{	int max=0;
		int count=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		} 
		int i=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]>max)
			{
				if(arr[i]>arr[i+1]||(i==n-1))
				{
					count++;
					max=arr[i];
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}