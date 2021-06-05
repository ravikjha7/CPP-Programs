#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	std::unordered_map<int,char> umap = {{1,'d'},{2,'c'}}; //Definition
	
	//Access
	cout<<umap[1]<<endl;
	cout<<umap[2]<<endl;
	cout<<endl;
	
	//Update
	umap[1] = 'a';
	
	//Iterate
	for(auto &elem : umap)
		cout<<elem.first<<" "<<elem.second<<endl;
	
	//Find
	auto result = umap.find(2);
	if(result!=umap.end())
		cout<<"Found "<<result->first<<" "<<result->second<<endl;
	else
		cout<<"Not Found"<<endl;
	
	return 0;
}