#include<bits/stdc++.h>
using namespace std;
template <class T>
T addAll(vector<T> list)
{
	T count=0;
	for(auto element : list){
		count +=element;
	}
	return count;
}
template <>
string addAll (vector<string> list)
{
	int count=0;
	for(auto element : list)
	for(auto character : element)
	count += character;
	return to_string(count);
}
int main()
{
	vector<int> V1 = {1,2,3,4,5,6,7};
	vector<double> V2 = {1.0,2.0,3.0,4.0,5.0,6.0,7.0};
	vector<string> v3 = {"abc","bcd","cde"};
	cout<<addAll<int>(V1)<<endl;
	cout<<addAll<double>(V2)<<endl;
	cout<<addAll(v3)<<endl;
	return 0;
}