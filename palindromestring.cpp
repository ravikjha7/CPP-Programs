#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.size();
	int count=0,i=0,j=len-1;
	while(i<j&&count<2)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
			continue;
		}
		else if(s[i]==s[j-1]||s[j]==s[i+1])
		{
			if(s[i]==s[j-1])
			{
				j=j-2;
				i++;
				count++;
				continue;
			}
			else if(s[j]==s[i+1])
			{
				
			}
		}
	}
}