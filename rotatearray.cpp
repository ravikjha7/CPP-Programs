#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int loc;
	cin>>loc;
	int temp;
	int i=0;
	while(loc--){
		temp = arr[i];
		for(int j=0;j<n;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}