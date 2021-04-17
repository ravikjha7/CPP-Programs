#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int rsum=0,lsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                rsum = rsum + arr[i][j];
                if(i==((n/2)))
                {
                    lsum=lsum+arr[i][j];
                }
            }
            else if((j==(i-(n-1))||i==(j-(n-1)))&&(i!=j))
            {
                lsum=lsum+arr[i][j];
            }
        }
		cout<<rsum<<" "<<lsum<<endl;
    }
	
    int res;
    if(lsum>rsum)
    {
        res=lsum-rsum;
    }
    else {
    res=rsum-lsum;
    }
    cout<<res<<endl;
    return 0;
}