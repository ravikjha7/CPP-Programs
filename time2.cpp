#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string start;
	string final;
	string faltu;
    cin>>start;
	cin>>faltu;
	cin>>final;
    float time=0;
    if(start[7]>final[7])
    {
        time=time+((10.0+final[7]-start[7])/3600.0);
        final[6]=final[6]-1;
    }
    else
    {
        time=time+ ((final[7]-start[7])/3600.0);
    }
    if(start[6]>final[6])
       {
             time=time+((6.0+final[6]-start[6])/360.0);
            final[4]=final[4]-1;
       }
    else
    {
        time=time+ ((final[6]-start[6])/360.0);
    }
    if(start[4]>final[4])
    {
        time=time+((10.0+final[4]-start[4])/60.0);
        final[3]=final[3]-1;
    }
    else
    {
        time=time+ ((final[4]-start[4])/60.0);
    }
    if(start[3]>final[3])
       {
             time=time+((6.0+final[3]-start[3])/6.0);
            final[1]=final[1]-1;
       }
    else
    {
        time=time+ ((final[3]-start[3])/6.0);
    }
    if(start[1]>final[1])
    {
        time=time+(10.0+final[1]-start[1]);
        final[0]=final[0]-1;
    }
    else
    {
        time=time+ ((final[1]-start[1]));
    }
    time=time+ ((final[0]-start[0])*10);
    cout<<fixed<<setprecision(3)<<time<<endl;
    return 0;
}
