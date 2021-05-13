#include<bits/stdc++.h>
using namespace std;
bool mycompare(pair <int,int>p1,pair <int,int>p2){
	return p1.first<p2.first;
}
int main()
{
	int arr[] = {7,4,10,33,20,42,8};
	vector <pair<int,int>> v;
	for(int i=0;i<7;i++)
	{
		v.push_back(make_pair(arr[i],i));
	}
	sort(v.begin(),v.end(),mycompare);
	for(int i=0;i<7;i++)
	{
		arr[v[i].second]=i;
	}
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
	
}