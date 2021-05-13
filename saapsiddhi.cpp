#include<iostream>
using namespace std;
int count(int a,int b)
{
	if(a==b)
		return 1;
	if(a>b)
	return 0;
	int ans=0;
	for(int i=1;i<=6;i++)
	{
		ans = ans + count(a+i,b);
	}
	return ans;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int no = count(a,b);
	cout<<no;
	return 0;
}