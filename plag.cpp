#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t,n,m,k,count;
	cin>>t;
	while(t--)
	{   
		count=0;
	    cin>>n>>m>>k;
	    int arr[k];
	    for(int i=0;i<k;i++)
	    {
	        cin>>arr[i];
	    }
	    int check[n+m+1];
		for(int i=0;i<n+m+1;i++)
		{
			check[i]=0;
		}
	    for(int i=0;i<k;i++)
	    {
	        check[arr[i]]++;
	    }
	    for(int j=0;j<=n;j++)
	    {
	        if(check[j]>1)
	        {
	            count++;
	        }
	    }
		cout<<count<<" ";
		for(int j=0;j<=n;j++)
	    {
	        if(check[j]>1)
	        {	
	            cout<<j<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
