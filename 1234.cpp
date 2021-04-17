#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			if(i==1)
				cout<<k;
			else
				cout<<k<<" ";
		}
		for(int j=1;j<=n-1;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}