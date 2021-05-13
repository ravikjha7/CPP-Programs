#include<bits/stdc++.h>
using namespace std;
int main()
{
	array <int,7> arr; // Declaration
	
	arr = {1,2,3,4,5,6,7}; //Initialization
	
	array <int,7> arr1 = {7,3,8,99,25,42,1}; //List Initialization
	
	array <int,7> arr2 {1,2,3,4,5,6,7}; //Uniform Initialization
	
	cout<<arr.at(6)<<endl; // at() function use to access elements
	
	cout<<arr[1]<<endl; //Access Element
	
	cout<<get<2>(arr)<<endl; //Access Element
	
	cout<<arr1.front()<<endl; //First Element
	
	cout<<arr1.back()<<endl; // Last Element
	
	cout<<arr.size()<<endl;//Returns Size Of Array
	
	cout<<arr.max_size()<<endl; //Returns Size Of Array
	
	arr.swap(arr1); //Swaps arr and arr1
	
	array<int,0> arr3;
	arr3.empty()?cout<<"Empty\n":cout<<"Not Empty\n"; //Returns 1 if array size is 0
	
	arr.fill(0); //Fills Array with 0
	
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}