#include<iostream>
#include<forward_list>
using namespace std;

// Same As Single Linked List Of C Language

int main()
{
	forward_list<int> list1 = {5,4,6,2}; // Definition
	forward_list<int> list2 = {7,1,8,9};
		
	list1.sort();
	list2.sort(); // Sorts The List
	
	list1.merge(list2); // Merges list2 at end of list1
	
	list1.reverse(); // Reverse The List
	
	list1.insert_after(list1.begin(),5); //Adds 5 after 1 element in the list
	
	list1.splice_after(list1.begin(),list2); /*Splices List2 and add data of
											  list2 in list1 after list.begin()	*/
											  
	cout<<"Size of List 2 : "<<distance(list2.begin(),list2.end())<<endl;
	// Gives The Distance Between The Two Parameters Given
	
	list1.resize(2);
	//Resizes The List Remove The Last Elements if size given is less than original
	// If Size given is Greater Than Original Then Puts 0 in the Ending Places
	
	list1.unique(); // Removes All Adjacents Duplicates
	
	list1.remove(2); // Removes All Appearance of Given Parameters
	
	for(auto element : list1)
	{
		cout<<element<<endl;
	}
	return 0;
}