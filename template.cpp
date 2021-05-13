#include<iostream>
using namespace std;
template <class T1,class T2>
auto getMax(T1 x,T2 y)
{
	return x>y?x:y;
}
int main()
{
	int x;
	float y;
	cin>>x>>y;
	cout<<getMax(x,y)<<endl;
	char c1,c2;
	cin>>c1>>c2;
	cout<<getMax(c1,c2)<<endl;
	return 0;
}