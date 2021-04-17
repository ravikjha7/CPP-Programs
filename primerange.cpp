#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int i,j,count=0;
	for(i=a;i<=b;i++)
	{	count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}