#include<iostream>
using namespace std;
int fact(int n)
{	
	if(n==0)
	{
		return 1;
	}
	else
	{
		int res=n*fact(n-1);
		return res;
	}
	
}
int combination(int n,int r)
{
	int res=fact(n)/(fact(n-r)*fact(r));
	return res;
}
int main()
{
	int n,r;
	cin>>n>>r;
	int ans=combination(n,r);
	cout<<ans<<endl;
	return 0;
}