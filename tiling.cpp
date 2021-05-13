#include<iostream>
using namespace std;
int tiling(int size)
{
	if(size==0)
	return 0;
	if(size==1)
	return 1;
	return tiling(size-1)+tiling(size-2);
}
int main()
{
	int n;
	cin>>n;
	int no = tiling(n);
	cout<<no<<endl;
	return 0;
}