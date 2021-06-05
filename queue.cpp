#include<bits/stdc++.h>
using namespace std;
void print(std::queue<int> que)
{	
	cout<<"Size Of Queue is "<<que.size()<<endl;
	while(!que.empty())
	{
		cout<<que.front()<<" ";
		que.pop();
	}
	cout<<endl;
}
int main()
{
	std::queue<int> que; // Declaration
	que.push(7); // Pushes Value to Rear/Back
	que.push(3);
	que.push(8);
	print(que);
	cout<<"Size Of Queue is "<<que.size()<<endl;
	return 0;
}