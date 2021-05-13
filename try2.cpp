#include<iostream>
#include<cstdlib>
using namespace std;
/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int checkbit(int n,int i){
    return ((n&(i<<1))!=0);
}
int setbit(int *n,int bit,int pos)
{   
    *n = *n|(bit<<pos);
    return 0;
}
int decode(int encoded[], int n, int first){
    int arr[n+1];
    arr[0]=first;
    int pos=0;
    for(int i=1;i<n+1;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {   pos=0;
        while(encoded[i]!=0)
        {
            if(checkbit(arr[i],pos)==checkbit(encoded[i],pos))
            {
                setbit(&arr[i+1],0,pos);
            }
            else
            {
                setbit(&arr[i+1],1,pos);
            }
            pos++;
			encoded[i]=encoded[i]>>1;
        }
    }
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
    return 0;
}
int main()
{
	int n;
	cin>>n;
	int encoded[n];
	for(int i=0;i<n;i++)
	{
		cin>>encoded[i];
	}
	int first;
	cin>>first;
	decode(encoded,n,first);
	return 0;
}