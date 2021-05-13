#include<iostream>
using namespace std;
string movex(string str)
{
	if(str.size()==0)
	return "";
	string ans = movex(str.substr(1));
	char ch= str[0];
	if(str[0]=='x')
	{
		ans = ans + "x";
		return ans;
	}
	return ch+ans;
}
int main()
{
	string str;
	cin>>str;
	str = movex(str);
	cout<<str;
	return 0;
}