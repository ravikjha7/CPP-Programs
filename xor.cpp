#include <iostream>
#include<cmath>
using namespace std;
int main() {
	long long int c,max,n,high,low;
	int t,count;
	scanf("%lld",&t);
	while(t--)
	{   
		count=0;
	    scanf("%lld",&c);
		n=c;
	    while(n>0)
		{
			n=n/2;
			count++;
		}
	   high=pow(2,count);
	   low=pow(2,count-1);
	   n=c-low;
	   max=(low-1)*(high-n-1);
	   printf("%lld\n",max);
	}
	return 0;
}
