#include<iostream>
using namespace std;
int friendspair(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	if(n==2)
	return 2;
	return (friendspair(n-1) + (friendspair(n-2)*(n-1)));
}
int main()
{
	int n;
	cin>>n;
	int count = friendspair(n);
	cout<<count<<endl;
	return 0;
}