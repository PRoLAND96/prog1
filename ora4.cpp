#include <iostream>
using namespace std;

/*
	[] lambda indtroducer
	() argument list
	{} function body

	[]
	[&] capture by reference 
	[=] capture by value 
	[&A, =B] capture a by referenca, b by value
	[=, &A]
*/

int main(){
	[](){
	cout << "Hello C++ lambda" << endl; 
	}

	();

	auto sum = [](double A, double B) {
		return A+B;	
	};
	
	
	auto add = sum;
	
	cout << add(3.25, 5.65) << endl;
	
	auto add2 = [](double A, double B) -> double { return A+B;};
	
	cout << add2(3.25, 5.65) << endl;
	
	double pi =3.1416;
	
	auto func = [pi](){
		cout << "The value of pi is " << pi << endl;
	
	};
	
	func();
	
	auto gene_lambda = [](auto arg){
		return arg+arg;
	
	};
	
	cout << gene_lambda(5) << endl;
	cout << gene_lambda(3.1416) << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
