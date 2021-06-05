#include<bits/stdc++.h>
using namespace std;
class Person
{
	public:
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
	multiset<int> mSet = {1,2,4,6,4,6};
	for(auto e:mSet)
	cout<<e<<endl;
	multiset<Person,std::greater<Person>> mSet2 = {{18,"Ravi"},{19,"Vishal"},{18,"Krishna"}};
	for(auto e:mSet2)
	cout<<e.age<<" "<<e.name<<endl;
	return 0;
}
