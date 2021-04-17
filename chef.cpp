#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int t;
	long long int len;
	cin>>t;
	long long int i;
	long long int count;
	while(t--)
	{   count=0;
	    string str;
	    cin>>str;
	    len=str.size();
	    for(i=0;i<len;i++)
	    {
	        if(str[i]=='1'&&str[i+1]=='1')
	        {   
	            count=count+1;
	            i++;
	        }
	        else if(str[i]=='1')
	        {
	            count=count+1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
