#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int len1=s.size();
    int len2=t.size();
    int check;
     if(len1==len2)
    {
       for(int i=0;i<len1;i++)
       {    check=0;
            for(int j=0;j<len2;j++)
            {
                if(s[i]==t[j])
                {
                    t[j]=0;
                    check=1;
                    break;
                }
                
            }
        if(check==0)
            cout<<"False"<<endl;
       }
        cout<<"True"<<endl;
    }
    else
        cout<<"False"<<endl;
    return 0;
}