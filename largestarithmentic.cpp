#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	for(int j=1;j<=t;j++)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int max=0,count=0;
		int diff;
		int i=0;
		int temp=n;
		while(n--)
		{	count=0;
			diff=arr[i+1]-arr[i];
			while(arr[i+1]-arr[i]==diff&&(i+1)<temp)
			{
				count++;
				i++;
			}
			count++;
			if(max<count)
			{
				max=count;
			}
		}
		cout<<"Test Case : "<<j<<"="<<max<<endl;
	}
	return 0;
}