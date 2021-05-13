#include<iostream>
using namespace std;
void permutation(string str,string ans)
{
	if(str.size()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char ch = str[0];
	
	for(int i=0;i<str.size();i++)
	{	ch = str[i];
		string ros = str.substr(0,i)+str.substr(i+1);
		permutation(ros,ans+ch);
	}
	return;
}
int main()
{
	string str;
	cin>>str;
	permutation(str,"");
	return 0;
}