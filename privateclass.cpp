#include<iostream>
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
};
int main()
{
	student arr[3];
	string s;
	for(int i=0;i<3;i++)
	{
		cout<<"Name :"<<endl;
		cin>>s;
		arr[i].setInfo(s);
		cout<<"Age :"<<endl;
		cin>>arr[i].age;
		cout<<"Gender :"<<endl;
		cin>>arr[i].gender;
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		arr[i].getInfo();
	}
	return 0;
}