#include<iostream>
using namespace std;
int sorted(int arr[],int n)
{
	if(n==1)
	return 1;
	if(arr[n-1]>=arr[n-2])
	return 1;
	else
	return 0;
}
int main()
{	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(sorted(arr,n))
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}