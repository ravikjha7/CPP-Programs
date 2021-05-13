#include<iostream>
using namespace std;
void gcd(int a,int b)
{
	//Euclid's Algo to find gcd
	/* 24 42 do 42%24=18 now 24%18=6 then 6%28=0 therfore 6 is gcd
	*/
	int rem;
	while(b!=0)
	{
		rem=a%b;
		a=b;
		b=rem;
	}
	cout<<a<<endl;
	
}
int main(){
	int a,b;
	cin>>a>>b;
	gcd(a,b);
	return 0;
}