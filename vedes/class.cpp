#include <iostream>
#include <string>

using namespace std;

class A{
	public:
		virtual void vf() {cout <<"A_vf()"<<endl;}
		virtual void zf() {cout <<"A_zf()"<<endl;}
		void f() {cout << "A_f()"<<endl;}
		virtual void pvf() const = 0; 
};

class B : public A {
public:
	virtual void vf() {cout <<"B_vf()"<<endl;}
	void pvf() const { std::cout << "B_pvf()\n";}
};


int main(){
	
	B b;
	b.vf();	
	b.f();
	b.pvf();
	b.zf();
}
