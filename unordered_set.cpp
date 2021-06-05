#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<int> uset = {1,3,5,3,7,8,5,7};
	for(auto e:uset)
	cout<<e<<" ";
	cout<<endl;
	auto search = uset.find(7);
	if(search!=uset.end())
	cout<<"Found "<<(*search)<<endl;
	else
	cout<<"Not Found"<<endl;
	return 0;
}