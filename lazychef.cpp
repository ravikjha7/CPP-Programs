#include <iostream>
using namespace std;

int main() {
	int t,x,m,d,ans;
	cin>>t;
	while(t--)
	{
	    cin>>x>>m>>d;
	    if((x*m)<(x+d))
	    ans = x*m;
	    else
	    ans = x+d;
	    cout<<ans<<endl;
	}
	return 0;
}
