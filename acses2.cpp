#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,diff;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a==b)
		{
			cout<<"0"<<endl;
		}
		else if(b>a)
		{
			diff = b - a;
			if(diff%2==0)
			{
				cout<<"2"<<endl;
			}
			else
			{
				cout<<"1"<<endl;
			}
		}
		else
		{
			diff = a-b;
			if(diff%2==0)
			{
				cout<<"1"<<endl;
			}
			else
			{
				cout<<"2"<<endl;
			}
		}
	
	}
	return 0;
}