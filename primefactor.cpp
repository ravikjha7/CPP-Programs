#include<iostream>
using namespace std;
void primefactor(int n){
	int prime[100]={0};
	for(int i=2;i<n;i++)
	{	if(prime[i]==0){
		for(int j=i*i;j<=n;j+=i)
		{	if(prime[j]==0)
			prime[j]=i;
		}
	}
	}
	while(prime[n]!=0)
	{
		cout<<prime[n]<<" ";
		n=n/prime[n];
	}
	cout<<n<<endl;
}
int main(){
	int n;
	cin>>n;
	primefactor(n);
	return 0;
}