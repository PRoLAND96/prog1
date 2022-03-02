#include <iostream>
#include <functional>

int sum(int x, int y){
	return x+y;
};

class  Add {
	public:
		int operator()(int x, int y) const {
			return x+y;
		}
		/*int operator+(int x, int y) const {
			return x*2+y/2;
		}
		
		
		*/

};

struct add_x {
	add_x(int val) : x(val){}
	int operator()(int y) const {return x+y;}
	
	private:
		int x;
	
};
using namespace std;
int main(){

	add_x add42(42); //példány létrehozása funktor osztályból
	int i = add42(8);
	cout << i << endl;
	
	i = add42(9);
	cout << i << endl;
	
	std::function<int(int,int)>func;
	
	func = sum;
	
	cout << func(5, 7) << endl;
	
	std::function<double(double,double)> sum = [](double A, double B) {return A+B;};
	
	cout << sum(4.5, 5.9) << endl;


}


