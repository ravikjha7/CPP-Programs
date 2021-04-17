#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int r=0;
	int c=m-1;
	int k;
	cin>>k;
	while(r<n&&c>=0)
	{
		if(arr[r][c]==k)
		{
			cout<<r<<" "<<c;
			return 0;
		}
		else if(arr[r][c]>k)
			c--;
		else
		r++;
	}
	cout<<"NotFound"<<endl;
	return 0;
}