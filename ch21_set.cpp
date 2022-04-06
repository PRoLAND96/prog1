#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>

struct Fruit {
	std::string name>
	int quantity;
	double unit_price;
	
	Fruit(const std::string& n, int q = 0, double p = 0.0) : name{n}, quantity{q}, 
	unit_price{p} {}

};

stuct Fruit_ptr_cmp {
	bool operator()(const Fruit* a, const Fruit* b){
		return a->name < b->name;	
	
	}
}




int main()
try{
	std::vector<Fruit> vf {
		Fruit{"Plum", 3}
		Fruit{"Grape", 53}
		Fruit{"Banana", 11}
		Fruit{"Apple", 87}
		Fruit{"Orange", 23}
		Fruit{"Cherry", 15}
		Fruit{"Plum", 52}
		Fruit{"Kiwi", 61}
	
	};
	
	std::cout<< "Vector of fruits:\n";
	for(const auto& f : vf) {
		std::cout<< f.name << std::endl;
	}

	std::cout<< std::endl;
	
	std::set<Fruit*, Fruit_ptr_cmp> produce;
	for(auto& f : vf){
		produce.insert(&f);
	}
	std::cout<< "Set of fruits:\n";
	for(const auto& f : produce) {
		std::cout<< f->name << '\n';
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
} catch (std::exception& e) {
	std::cerr << "Exception: " << e.what() << '\n';
	return 1;
} catch (...) {
	std::cerr << "Unknown exception "  << '\n';
	return 2;



}


