#include<bits/stdc++.h>
using namespace std;
void print(std::pair <int,char> e)
{
	cout<<e.first<<" "<<e.second<<endl;
}
int main()
{
	std::pair <int,char> p;   // Declaration
	
	pair<int,char> p1(5,'c'); // Definition Type 1
	print(p1);

	pair<int,char> p2 = std::make_pair(7,'d'); // Definition Type 2
	print(p2);
	
	std::vector<std::pair<string,int>> v;
	v.push_back(std::make_pair("Dhoni",7));
	v.push_back(std::pair<string,int>("Jadeja",8));
	v.push_back(std::pair<string,int>("Raina",3));
	
	for(auto e:v)
	cout<<e.first<<" "<<e.second<<endl;
	return 0;
}