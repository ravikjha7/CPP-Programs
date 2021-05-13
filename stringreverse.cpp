#include<iostream>
using namespace std;
void reverse(string str,int len,int i)
{
	if(i==len)
	return;
	reverse(str,len,i+1);
	cout<<str[i];
	return;
}
int main()
{
	string str;
	getline(cin,str);
	int len=str.size();
	reverse(str,len,0);
	return 0;
}