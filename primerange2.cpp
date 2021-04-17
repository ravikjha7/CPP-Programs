#include<iostream>
using namespace std;
int primeRange(int a,int b)
{	int count=0,cnt;
	for(int i=a;i<=b;i++)
	{
		cnt=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				cnt++;
				break;
			}
		}
		if(cnt==0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int n=primeRange(a,b);
	cout<<n<<endl;
}