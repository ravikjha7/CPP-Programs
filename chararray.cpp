#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	char arr[n+1];
	cin.getline(arr,n);
	int sum=0,max=0;
	int i=0;
	int end;
	while(1)
	{
		if(arr[i]==' '||arr[i]=='\0')
		{	
			if(max<sum)
			{
				max=sum;
				end=i;
			}
			sum=0;
		}
		else
		sum++;
		if(arr[i]=='\0')
		{
			cout<<max<<endl;
			return 0;
		}
		i++;
	}
	for(int j=end-max;j<end;j++)
	{
		cout<<arr[j];
	}
	return 0;
}