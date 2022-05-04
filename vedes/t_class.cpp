#include <iostream>
#include <string>

using namespace std;

template<typename T> class A{
	public:
		virtual void vf() {cout << "Avf()" <<endl;}
		virtual void f() {cout << "Avf()" <<endl;}
		virtual void pvf() const = 0; 
};

class B : public A
{
public:
	void vf() {cout << "B_vf()" <<endl;}
	void f() {cout << "B_f()" <<endl;}
	void pvf() { cout << "B_pvf()" <<'\n'; }
};


int main(){
	
	
	a.vf();	
	a.f();
	a.pvf();
}
