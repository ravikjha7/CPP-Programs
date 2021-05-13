#include<bits/stdc++.h>
using namespace std;
class student{
	string name;
	public:
	int age;
	bool gender;
	void setInfo(string s)
	{
		name=s;
	}
	void getInfo()
	{	
		cout<<"Name : ";
		cout<<name<<endl;
		cout<<"Age : ";
		cout<<age<<endl;
		cout<<"Gender : ";
		cout<<gender<<endl<<endl;
	}
	student (string s,int a,int g) //Parametrised Constructor
	{	cout<<"Parametrised Constructor"<<endl;
		name=s;
		age=a;
		gender=g;
	}
	student(){
		cout<<"Default Constructor"<<endl;
	}
	student(student &a){
		cout<<"Copy Constructor"<<endl;
		name = a.name;
		age = a.age; //User-Defined Copy Constructor
		gender = a.gender;
	}
	~student(){
		cout<<"Destructor Called"<<endl; 
		//Destructor it get calls after returning main function
	}
	bool operator == (student &a){
		if(name==a.name && age==a.age && gender==a.gender)
		return true;
		return false;
	}
	//Operator OverLoading Means Defining an Operator
};
int main()
{
	student a("Ravi",18,0); //Calling Parametrised Constructor
	student b;
	student c = a;
	if(c==a){ //Here == needs to be defined means if a==c what exactly needs to be same
		cout<<"Same"<<endl;
	}
	else{
		cout<<"Not Same"<<endl;
	}
	return 0;
}
/*The Main Difference Between user -defiend and default Copy constructor is that default cc do shallow copying while user defined do deep copying means it copies pointer values as well as its adress while shallow copying just implies copying the pointer and not its address*/