#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s="";
	int x=1;
	while(x<=n)
	x=x*16;
	x=x/16;
	int r;
	while(n>0)
	{
		r=n/x;
		if(r<10)
		{
			cout<<r;
		}
		else
		{
			printf("%c",r+55);
		}
		n= n - (r*x);
		x=x/16;
	}
	return 0;
}
/*int main()
{
	string input;
	cin>>input;
	int ans=0;
	int x=1;
	int len=input.size();
	
	for(int i=len-1;i>=0;i--)
	{
		if(input[i] >= 'A' && input[i] <= 'F')
		{
			ans+=x*(input[i]-'A'+10);
		}
		else if(input[i] >= '0' && input[i] <= '9')
		{
			ans+=x*(input[i]-'0');
		}
			x=x*16;
	}
	cout<<ans<<endl;
	return 0; 
	
}*/