#include<iostream>
using namespace std;
int main()
{
	int t,n,count;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		count=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				count++;
			}
			if(n-arr[i]<0)
		}
		if(count<=0||count%2==0)
			cout<<"Second"<<endl;
		else 
			cout<<"First"<<endl;
	}
	return 0;
}