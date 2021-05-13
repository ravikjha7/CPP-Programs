#include<bits/stdc++.h>
using namespace std;
class A{
	public:
	  void myfuncA(){
		  cout<<"Inherited A"<<endl;
	  }
};
class B{
	public:
	  void myfuncB(){
		  cout<<"Inherited B"<<endl;
	  }
};
class C: public A,public B{ //Multiple Inheritance
	
};
int main(){
	C c;
	c.myfuncA();
	c.myfuncB();
	return 0;
}
