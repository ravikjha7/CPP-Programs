#include<bits/stdc++.h>
using namespace std;
//Function OverLoading 
class A{
	public:
	 void display(){
		cout<<"No"<<endl;
	}
	void display(int x){
		cout<<"int"<<endl;
	}
	void display(double x){
		cout<<"double"<<endl;
	}
};
// Operator OverLoading
class complex{
	int real,imag;
	public:
	void set(int r,int i){
		real = r;
		imag = i;
	}
	complex operator + (complex &a){
		complex res;
		res.real = real + a.real;
		res.imag = imag + a.imag;
		return res;
	}
	void display(){
		cout<<real<<" + "<<imag<<endl;
	}
};
// Virtual Function
class base{
	public:
	virtual void display(){
		cout<<"No"<<endl;
	}
	virtual void display(int x){
		cout<<"int"<<endl;
	}
	virtual void display(double x){
		cout<<"double"<<endl;
	}
};
class derived: public base{
	public:
		void display(){
		cout<<"No1"<<endl;
	}
		void display(int x){
		cout<<"int1"<<endl;
	}
	void display(double x){
		cout<<"double1"<<endl;
	}
};

/*int main(){
	A obj;
	obj.display();
	obj.display(4);
	obj.display(6.2);
	return 0;
}*/
/*
int main(){
	complex c(6,4),d(4,6);
	complex e = c +d;
	e.display();
	return 0;
} */
int main(){
	base *ptr;
	derived obj;
	ptr = &obj;
	ptr -> display();
	ptr->display(4);
	ptr->display(6.2);
	return 0;
}