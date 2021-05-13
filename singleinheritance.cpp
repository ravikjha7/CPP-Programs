#include<bits/stdc++.h>
using namespace std;
class A{
	public:
	  void myfucA(){
		  cout<<"Inherited A"<<endl;
	  }
};
class B: public A{ //Single Inheritance
	
};
int main(){
	B b;
	b.myfuncA();
	return 0;
}

