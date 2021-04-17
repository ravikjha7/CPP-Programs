#include<iostream>
#include<cmath>
using namespace std;
int otd()
{
	int n;
	cin>>n;
	int r,i=0,sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum + (pow(8,i)*r);
		n=n/10;
		i++;
	}
	cout<<sum<<endl;
	return 0;
}
int dto()
{
	int n;
	cin>>n;
	int count=0,sum=0,temp;
	temp=n;
	while(n>0)
	{
		n=n/8;
		count++;
	}
	n=temp;
	int rem,quo;
	while(n>0)
	{	
		rem=pow(8,count-1);
		quo=n/rem;
		sum=(sum*10)+quo;
		n=n%rem;
		count--;
	}
	cout<<sum<<endl;
	return 0;
}
int main()
{	int n;
	cout<<"1.Octal To Decimal"<<endl;
	cout<<"2.Decimal To Octal"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			otd();
			break;
		case 2:
			dto();
			break;
		default:
			cout<<"Invalid Options!!!"<<endl;
	}
	return 0;
}