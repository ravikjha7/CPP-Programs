#include <iostream>

using namespace std;

int main()
{
    int t;
   cin>>t;
   while(t--){
   long long int s,i,tot=0;
   cin>>s;
   long long int q[s];
   for(i=0;i<s;i++)
   {
       cin>>q[i];
   }
   long long int j=0;
   while(s--)
   {
       
   long long int e;
   cin>>e;
   long long int l[e];
   for(i=0;i<e;i++)
   {
       cin>>l[i];
   }
   for(i=0;i<e;i++)
   {
       if(i==0)
         tot=tot+l[i];
        else
        tot=tot+l[i]-q[j];
   }
   j++;
   }
   
cout<<tot<<endl;
}
    return 0;
}