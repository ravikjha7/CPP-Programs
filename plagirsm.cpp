#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		int arr;
		map<int,int> Map;
		for(int i=0;i<k;i++)
		{
			cin>>arr;
			Map[arr]++;
		}
		vector <int> v;
		for(int i=0;i<=n;i++)
		{
			if(Map[i]>1)
			v.push_back(i);
		}
		sort(v.begin(),v.end());
		cout<<v.size()<<" ";
		for(auto elem : v){ cout<<elem<<" "; }
		cout<<endl;
	}
	return 0;
}