#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	std::unordered_multimap<int,char> umm = {{5,'d'}}; //Definition Type 1
	
	umm.insert({4,'a'}); //Insert Type 1
	
	umm.insert(std::pair<int,char>(6,'b')); // Insert Function Using Pair
	
	umm.insert(make_pair(3,'c')); // Insert Function using make_pair
	
	umm.insert(make_pair(3,'c')); // Storing DUplicate Key and value
	
	for(auto elem : umm)
	cout<<elem.first<<" "<<elem.second<<endl;
	
	return 0;
}
