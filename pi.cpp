#include<iostream>
using namespace std;
void pi(string str,int j)
{	if(j==str.size())
	return;
	if(str[j]=='p'&&str[j+1]=='i')
	{
		cout<<3.14;
		pi(str,j+2);
		return;
	}
	cout<<str[j];
	pi(str,j+1);
	return;
}
int main()
{
	string str;
	cin>>str;
	pi(str,0);
	return 0;
}