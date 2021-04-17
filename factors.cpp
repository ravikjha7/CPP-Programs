/* To find the factors of the numbers given in an array and to sort the numbers in descending order according to the factors present in it.
Input:
Given array: 8, 2, 3, 12, 16, 19

Output:
12, 16, 8, 19, 3, 2

Example
12 factors are 2,3,4,6 and 12
19 factor is 19 */
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
	int count[n];
	for(int i=0;i<n;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				count[i]++;
			}
		}
	}
	int isSorted;
	for(int i=0;i<n-1;i++)
	{	isSorted=1;
		for(int j=0;j<n-i-1;j++)
		{
			if(count[j]<count[j+1])
			{
				int temp=count[j];
				count[j]=count[j+1];
				count[j+1]=temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				isSorted=0;
			}
		}
		if(isSorted)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}