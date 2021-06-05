#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str,s;
		cin>>str;
        int ans=2;
        vector<string> v;
        for(int i=1;i<n;i++)
        v.push_back(str.substr(i)+str.substr(0,i));
		for(auto e:v)
		cout<<e<<endl;
		char str2[n][n];
		for(int i=0;i<n;i++)
		{
			str2[i] = v[i];
		}
        for(int i=0;i<n;i++)
        {   
            ans = 2;
            for(int j=0;j<n;j++)
            {
                if(ans ==2)
                    ans = str2[j][i];
                else
                    ans = ans ^ str2[j][i];
            }
            s = s + to_string(ans);
        }
        cout<<s<<endl;
    }
    return 0;
}