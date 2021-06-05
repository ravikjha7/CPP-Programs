#include<bits/stdc++.h>
using namespace std;
// Deque Means Double Headed Queue
void print(std::deque<int> dqu)
{
	for(auto e:dqu) //Iterating Over Deque
	cout<<e<<" ";
	cout<<endl;
}
int main()
{
	std::deque<int> dqu = {2,3,4}; //Definition
	dqu.push_front(1); //Pushes 1 to starting of deque
	dqu.push_back(5);
	print(dqu); 
	dqu.pop_back(); // Time Complexity : O(1)
	dqu.pop_front();// For Any Function Related To Front and Back
	print(dqu);
	return 0;
}