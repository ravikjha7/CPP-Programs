#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		arr[0][i]=1;
	}
	for(int j=0;j<n;j++)
	{
		arr[j][0]=1;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||j==0)
			{
				continue;
			}
			else
			{
				arr[i][j]=arr[i-1][j]+arr[i][j-1];
			}
		}
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
			}
		}
	}
	cout<<max<<endl;
	return 0;
	
}