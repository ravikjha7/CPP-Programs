#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		int gold[n];
		for(int i=0;i<n;i++)
		{
			cin>>gold[i];
		}
		int sum=0;
		int flag;
		if(n==1){
			if(gold[0]==x)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
				cout<<gold[0]<<endl;
			}
		}
		else
		{	flag=1;
			for(int i=0;i<n;i++)
			{
				if(sum+gold[i]==x)
				{
					if(i!=n-1)
					{
						swap(&gold[i],&gold[i+1]);
					}
					else
					{
						cout<<"NO"<<endl;
						flag=0;
					}
				}
				sum=sum+gold[i];
			}
			if(flag)
			{		
				cout<<"YES"<<endl;
				for(int i=0;i<n;i++)
				{
					cout<<gold[i]<<" ";
				}
				cout<<endl;
			}
		}	
	}
	return 0;
}