#include<bits/stdc++.h>
using namespace std;
int checkbit(int n , int i)
{
	return ((n&(1<<i))!=0);
}
int setbit(int n,int i)
{
	return (n|(1<<i));
}
int main()
{
	//cout<<checkbit(5,2)<<endl;
	  cout<<setbit(5,1)<<endl;
	return 0;
}