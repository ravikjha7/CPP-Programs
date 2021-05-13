#include<iostream>
using namespace std;
string removedup(string str)
{
	if(str.size()==0)
	return "";
	
	char ch=str[0];
	string ans=removedup(str.substr(1));
	if(ch==ans[0])
	return ans;
	return (ch+ans);
	
}
int main()
{
	string str;
	cin>>str;
	str=removedup(str);
	cout<<str<<endl;
	return 0;
}