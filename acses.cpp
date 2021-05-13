#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		int arr[n];
		int i=0;
			for(int i=0;i<n;i++)
			{
				arr[i]=0;
			}
			for(int i=0;i<n;i++)
			{
				if(s[i]=='2')
				arr[i]=1;
				if(s[i]=='0')
				arr[i]=2;
			}
			i=0;
			if(arr[0]==1)
			{
				if(arr[1]==2)
				{
					if(arr[2]==1)
					{
						if(arr[3]==2)
						{
							cout<<"YES"<<endl;
						}
						else if(arr[n-1]==2)
						{
							cout<<"YES"<<endl;
						}
						else
						{
							cout<<"NO"<<endl;
						}
					}
					else if(arr[n-1]==2&&arr[n-2]==1)
					{
						cout<<"YES"<<endl;
					}
					else
					{
						cout<<"NO"<<endl;
					}
				}
				else if(arr[n-1]==2&&arr[n-2]==1&&arr[n-3]==2)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
			else if(arr[n-1]==2&&arr[n-2]==1&&arr[n-3]==2&&arr[n-4]==1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		
	}
	
	return 0;
}