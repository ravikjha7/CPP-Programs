#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_multiset<int> umset = {7,3,8,7,25,42,99};
	umset.insert(7);
	for(auto e : umset)
	cout<<e<<" ";
	cout<<endl;
	auto let = umset.find(7);
	if(let!=umset.end())
	cout<<"Found "<<(*let)<<endl;
	else
	cout<<"Not Found"<<endl;
	return 0;
}