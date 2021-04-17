/* Find the minimum number of times required to represent a number as sum of squares.
12 = 1^2 + 1^2 + 1^2 + 1^2 + 1^2 + 1^2 +
1^2 + 1^2 + 1^2 + 1^2 + 1^2 + 1^2
12 = 2^2 + 2^2 + 2^2
12 = 3^2 + 1^2 + 1^2 + 1^2
Input:
Enter the number : 12
Output: min: 3 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count[2]={0,0};
	int temp=n;
	int i=0;
	int sum=0;
	int root= sqrt(n);
	if(root*root==n)
	{
		cout<<1;
		return 0;
	}
	while(i<=1)
	{	n = temp;
		sum=0;
		while(n>0)
		{	
			root = sqrt(n);
			if(sum==0)
			n = n -((root-i)*(root-i));
			else
			n = n -(root*root);
			count[i]++;
			sum++;
		}
		i++;
	}
	if(count[0]>count[1])
		cout<<count[1];
	else
		cout<<count[0];
	return 0;
}