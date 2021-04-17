#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
	int sum=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(sum>0)
		sum=sum+arr[i];
		else
		{
			sum=0;
			sum+=arr[i];
		}
		maxsum=max(sum,maxsum);
	}
	return maxsum;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int wrapsum = kadane(arr,n);
	int nowrapsum;
	int totalsum=0;
	for(int i=0;i<n;i++)
	{
		totalsum+=arr[i];
		arr[i]=-arr[i];
	}
	nowrapsum = totalsum + kadane(arr,n);
	cout<<"Wrap Sum : "<<wrapsum<<endl;
	cout<<"No Wrap Sum : "<<nowrapsum;
	return 0;
}