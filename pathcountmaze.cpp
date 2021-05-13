#include<iostream>
using namespace std;
int countpathmaze(int n,int i,int j)
{
	if(i==n-1&&j==n-1)
	{
		return 1;
	}
	if(i>=n||j>=n)
	{
		return 0;
	}
	return countpathmaze(n,i+1,j) + countpathmaze(n,i,j+1);
}
int main()
{
	int count =countpathmaze(3,0,0);
	cout<<count<<endl;
	return 0;
}