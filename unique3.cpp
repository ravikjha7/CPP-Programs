#include<iostream>
using namespace std;
int getbit(int n,int i)
{
	return ((n&(1<<i))!=0);
}
int setbit(int n,int i)
{
	return (n|(1<<i));
}
void unique(int arr[],int n)
{	int result=0;
	for(int i=0;i<64;i++)
	{	int sum=0;
		for(int j=0;j<n;j++)
		{
			if(getbit(arr[j],i))
			{
				sum++;
			}
		}
		if(sum%3!=0)
		{
			result=setbit(result,i);
		}
		
	}
	cout<<result<<endl;
}
int main()
{
	int arr[]={1,2,3,4,3,2,1,2,3,1};
	unique(arr,10);
	return 0;
}