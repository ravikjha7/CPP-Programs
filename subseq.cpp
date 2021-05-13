#include<iostream>
using namespace std;
void subseq(string str,string ans)
{
	if(str.size()==0){
	cout<<ans<<"\n";
	return;
	}
	char ch = str[0];
	string ros = str.substr(1);
	subseq(ros,ans);
	subseq(ros,ans+ch);
	return;
}
int main(){
	string str;
	cin>>str;
	subseq(str,"");
	return 0;
}