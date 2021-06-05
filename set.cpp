#include<bits/stdc++.h>
using namespace std;
class Person
{
	public :
		int age;
		string name;
		bool operator < (Person b)
		const {
			return age<b.age;
		}
		bool operator > (Person b)
		const {
			return age>b.age;
		}
};
int main()
{
	std::set<int> Set = {5,2,3,1,4,2,3,1,5}; // Definition
	
	//Iterating
	for(auto elem : Set)
	cout<<elem<<endl;
	
	std::set<Person,std::greater<Person>> Set1 = {{18,"Ravi"},{19,"Sumant"},{20,"Krishna"}}; //Set Of Object
	
	//Iterating
	for(auto elem : Set1)
	cout<<elem.age<<" "<<elem.name<<endl;
	
	return 0;
}