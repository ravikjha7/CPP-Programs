#include<bits/stdc++.h>
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
	int minidx=INT_MAX;
	int n2=INT_MAX;
	int index[n2];
	for(int i=0;i<n2;i++)
	{
		index[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		if(index[arr[i]]!=-1)
		{
			minidx = min(minidx,index[arr[i]]);
		}
		else
		{
			index[arr[i]]=i;
		}
	}
	if(minidx==INT_MAX)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<minidx+1<<endl;
	}
	return 0;
}