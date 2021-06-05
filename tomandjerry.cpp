#include <iostream>
using namespace std;

int main() {
	long int t,a,b,c,d,k,f;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d>>k;
	    f = (c-a) + (d-b);
	    f = f-k;
	    if(f%2==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
