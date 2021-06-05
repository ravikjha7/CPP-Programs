#include<iostream>
#include<map>
#include<vector>
//#include<functional>
// Map Is Based on BST Stores Data In Arranged Order

using namespace std;
int main()
{
	std::map<string,int> Map1; //Declaration
	
	std::map<string,int,std::greater<string>> Map; //Declaration In Descending Order
	
	/*
		std::map<string,int,greater<>> Map; This Can Also Be uSed 
		std::map<string,int,less<>> Map; This Arranges in Ascending Order
	*/
	
	Map["Ravi"] = 750656; // Addition Of Elements
	Map["Vishal"] = 79729; // Vishal is Key and 79729 is Value 
	
	Map.insert(std::make_pair("Sumant",885599)); // Value can be same but key should
												//	be unique
	for(auto element : Map)
	{
		cout<<element.first<<" : "<<element.second<<endl;
	}
	
	//To Store Multiple Values To a Single Key
	std::map<string,vector<int>> Map2; //We have used vector instead of int
	
	//We have to use pushback function for it
	Map2["Vishal"].push_back(79729);
	Map2["Ravi"].push_back(750656);
	Map2["Ravi"].push_back(997539);
	Map2["Sumant"].push_back(885599);
	Map2["Sumant"].push_back(787584);
	
	for(auto element : Map2)
	{
		cout<<element.first<<" : ";
		for(auto element2 : element.second)
		{
			cout<<element2<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}