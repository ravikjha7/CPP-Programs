#include<iostream>
#include<string>
#include<algorithm>//included for sort function
using namespace std;
int main()
{
	string str; //declaration
	string str1 = "Great" //definition
	cin>>str; // Input
	getline(cin , str); //Input with Spaces
	cout<<str; // Prints String
	str.append(str1);//appends str1 to str
	str = str + str1; //again appends str1 to str
	str.clear();//clears the string
	str.compare(str1);//returns + if str1>str , - if str<str , 0 if equal
	str.empty();//checks whther string is empty or not returns 1 if empty
	str1.erase(2,3);//deletes 3 elements from index no. 2
	str1.find("Gre");//returns the index of first letter where word is found
	str1.insert(2,"lol");//inserts lol at index no. 2
	str1.size();//returns the size of the string
	str1.length();//does the same as above
	str = str1.substr(3,2);//returns 2 characters from the index no. 3
	str="786";
	int x=stoi(str);//stoi converts string to integer
	str = to_string(x);//to_string converts integer to string
	str="jfuwgfsbkj";
	sort(str.begin(),str.end());
	/* Here sort function sorts the string in alphabetical order
	   while str.begin() gives the starting operator and str.end() gives
	   the ending operator
	*/
	transform(str.begin(),str.end(),str.begin(),::toupper);
	//transforms the string to uppercase
	transform(str.begin(),str.end(),str.begin(),::tolower);
	//transforms the string to lowercase
	return 0;
}