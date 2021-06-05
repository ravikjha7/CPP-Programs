#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    multimap<char ,int> Multimap;
	Multimap.insert(make_pair('a',1));
	Multimap.insert(make_pair('a',2)); //To insert values in multimap
	Multimap.insert(make_pair('a',3));
	Multimap.insert(make_pair('b',1));
	Multimap.insert(make_pair('b',2));
	
	//To iterate over The MultiMap
	for(auto element : Multimap)
	{
		cout<<element.first<<" "<<element.second<<endl;
	}
	cout<<endl;
	
	//To get all the values of a specific key
	auto range = Multimap.equal_range('a');
	for(auto it = range.first; it!= range.second ; it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}cout<<endl;
	
	//cout<<Multimap.contains('a'); Returns true or false 
								  // Depending on whether a exists or not
	
	auto pair = Multimap.find('a'); // Give Any pair of key and value 
	cout<<pair->first<<" "<<pair->second<<endl;
	cout<<endl;
	
	auto range2 = Multimap.lower_bound('a'); //Returns the pair of smallest value of key
	cout<<range2->first<<" "<<range2->second<<endl;
	cout<<endl;
	
	auto range3 = Multimap.upper_bound('a');
	// For Some Weird Reason It Returns the Next Key Value pair Of The Highest Value of
	// The Asked Key
	cout<<range3->first<<" "<<range3->second<<endl;
	cout<<endl;
	
	cout<<Multimap.count('a');
	//Returns No of Values of a
	
	return 0;
}