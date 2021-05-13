#include<iostream>
using namespace std;
bool isPossible(int n)
{
	while(n>8)
	{
		n=n/8;
	}
	if(n==2||n==4||n==8)
	return true;
	return false;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(isPossible(n))
		{
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
	return 0;
}