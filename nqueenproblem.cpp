#include<iostream>
using namespace std;
bool isSafe(int n,int x,int y,int **arr){
	for(int row=0;row<x;row++)
	{
		if(arr[row][y]==1)
		return false;
	}
	int row=x,col=y;
	while(row>=0&&col>=0){
		if(arr[row][col]==1)
		return false;
		row--;
		col--;
	}
	row=x;
	col=y;
	while(row>=0&&col<n){
		if(arr[row][col]==1)
		return false;
		row--;
		col++;
	}
	return true;
}
bool placequeen(int n,int x,int **arr){
	if(x>=n)
	return true;
	for(int col=0;col<n;col++)
	{
		if(isSafe(n,x,col,arr))
		{	
			arr[x][col]=1;
			if(placequeen(n,x+1,arr)){
				return true;
			}
			arr[x][col]=0;
		}
	}return false;
}
int main(){
	int n;
	cin>>n;
	int **arr = new int*[n];
	for(int i=0;i<n;i++)
	arr[i] = new int[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=0;
		}
	}
	if(placequeen(n,0,arr)){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}}
	return 0;
}