#include<iostream>
#include<cmath>
using namespace std;
int dtb()
{
	int n,count=0,temp,sum=0;
	cin>>n;
	temp=n;
	while(n>0)
	{
		count++;
		n=n/2;
	}
	n=temp;
	for(int i=count-1;i>=0;i--)
	{
		if(n%2==0)
		{	
			sum=sum*10+0;
		}
		else
		{
			if(sum==0)
			{
				sum=sum+(1*pow(10,count-i-1));
			}
			else
			{
				sum=sum*10+1;
			}
		}
		n=n/2;
	}
	cout<<sum<<endl;
	return 0;
	
}
int btd()
{
	int n,sum=0,r,i=0;
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(pow(2,i)*r);
		n=n/10;
		i++;
	}
	cout<<sum<<endl;
	return 0;
}
int main()
{
	int n;
	cout<<"1.Decimal to Binary"<<endl;
	cout<<"2.Binary to Decimal"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			dtb();
			break;
		case 2:
			btd();
			break;
		default:
			cout<<"Invalid Options!!!"<<endl;
	}
	return 0;
}