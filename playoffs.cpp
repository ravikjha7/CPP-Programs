#include<bits/stdc++.h>
using namespace std;
int min(int a ,int b)
{	
	if(a<b)
	return a;
	else
	return b;
}
int max(int a ,int b)
{	
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	int t,s1,s2,s3,s4;
	cin>>t;
	while(t--)
	{	
		cin>>s1>>s2>>s3>>s4;
		if(min(s1,s2)>max(s3,s4)||min(s3,s4)>max(s1,s2))
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	return 0;
}