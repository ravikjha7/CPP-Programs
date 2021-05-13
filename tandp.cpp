#include<iostream>
using namespace std;
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int i=0,j=0;
        int count[n*m];
        for(int k=0;k<n*m;k++)
        count[i]=0;
        int k=0;
        while(1){
            if(arr[i][j]==1)
            {
                count[k]++;
                if(arr[i+1][j]==1)
                {
                    i++;
                }
                else if(arr[i][j+1]==1)
                {
                    j++;
                }
                else
                k++;
            }
            if(i==n&&j==m)
            break;
        }
		for(int i=0;i<n*m;i++)
		{
			for(int j=0;j<(n*m)-i-1;j++)
			{
				if(count[j]<count[j+1])
				{
					int temp = count[j];
					count[j]=count[j+1];
					count[j+1]=temp;
				}
			}
		}
		int sum=0;
		for(int i=0;i<n*m;i++)
		{
			if(i%2==1)
			sum = sum + count[i];
		}
        cout<<sum<<endl;
    }
    return 0;
}