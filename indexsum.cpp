#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int start=0;
	int end=0;
	int sum=0;
	while(start<n)
	{	sum = 0;
		end=start;
		while(sum<=s&&end<n)
		{	
			if(sum+arr[end]==s)
			{
				cout<<start+1<<" "<<end+1;
				return 0;
			}
			sum = sum + arr[end];
			end++;
		}
		start++;
	}
}