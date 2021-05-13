// Encapsulation means to hide private data from the user
#include<bits/stdc++.h>
using namespace std;
class A{
	public:
	int a;
	void funcA(){
		cout<<"FuncA"<<endl;
	}
	private :
	int b;
	void funcB(){
		cout<<"FuncB"<<endl;
	}
	protected:
	int c;
	void funcC(){
		cout<<"FunC"<<endl;
	}
};
int main(){
	A obj;
	obj.funcA();
	obj.funcB(); // Private Function Cannot Be Accessed so it will give error..
	return 0;
}