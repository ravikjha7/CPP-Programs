#include<bits/stdc++.h>
using namespace std;
void print(std::stack<int> stk)
{
	while(!stk.empty())
	{
		cout<<stk.top()<<" ";
		stk.pop();
	}
	cout<<endl;
}
void print(std::stack<int,std::vector<int>> stk)
{
	while(!stk.empty())
	{
		cout<<stk.top()<<" ";
		stk.pop();
	}
	cout<<endl;
}
int main()
{
	std::stack<int> stk;//This uses deque internal function 
	
	std::stack<int,std::vector<int>> stk2;
	//This uses vector internal function 
	
	stk.push(7);
	stk.push(3);
	stk.push(8);
	print(stk);
	stk2.push(7);
	stk2.push(3);
	stk2.push(8);
	print(stk2);
	return 0;
}
