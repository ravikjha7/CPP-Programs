#include<iostream>
using namespace std;
int knapsack(int n,int w,int weight[],int value[])
{
	if(n==0||w==0)
	return 0;
	if(weight[n-1]>w)
	return knapsack(n-1,w,weight,value);
	return max(knapsack(n-1,w,weight,value),knapsack(n-1,w-weight[n-1],weight,value)+value[n-1]);
}
int main()
{
	int n;
	cin>>n;
	int w;
	cin>>w;
	int weight[n],value[n];
	for(int i=0;i<n;i++)
	{
		cin>>weight[i];
		cin>>value[i];
	}
	int money = knapsack(n,w,weight,value);
	cout<<money<<endl;
	return 0;
}