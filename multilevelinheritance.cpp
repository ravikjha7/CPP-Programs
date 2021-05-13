#include<bits/stdc++.h>
using namespace std;
class A{
	public:
	  void myfuncA(){
		  cout<<"Inherited A"<<endl;
	  }
};
class B: public A{
	public:
	  void myfuncB(){
		  cout<<"Inherited B"<<endl;
	  }
};
class C: public B{ //Multi Level Inheritance
	
};
int main(){
	C c;
	c.myfuncA();
	c.myfuncB();
	return 0;
}