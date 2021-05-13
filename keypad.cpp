#include<iostream>
using namespace std;
string keypadinput[] = {"","/.","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string str,string ans)
{
	if(str.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char ch = str[0];
	string s = keypadinput[ch-'0'];
	string ros = str.substr(1);
	for(int i=0;i<s.length();i++)
	{
		keypad(ros,ans+s[i]);  
	}
	return;
}
int main()
{
	string str;
	cin>>str;
	keypad(str,"");
	return 0;
}