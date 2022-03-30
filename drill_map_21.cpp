#include <iostream> 
#include <stdexcept>
#include <map>
#include <string>
#include <numeric>

template<typename K, typename V>
void print(const std::map<K, V>& m){
	for(const std::pair<K,V>& a: m){
		std::cout << a.first << '\t' << a.second << std::endl;
	}
}

void read_map(std::map<std::string, int>& m){
	std::string s;
	int i=0;
	
	while(m.size()<10){
		std::cin >> s >> i;
		//m[s] = i;
		m.insert(std::make_pair(s,i));
		
	}
}



int main()
try{
	std::map<std::string, int> msi;
	
	
	msi["a"] = 42;
	msi["e"] = 21;
	msi["ughjk"] = 2;
	msi["key"] = 3;
	msi["ab"] = 17;
	msi["cd"] = 93;
	msi["po"] = 62;
	msi["tt"] = 37;
	msi["x"] = 11;
	msi["k"] = 1;

	print(msi);
	
	std::cout <<std::endl << "Törlés utám: " << std::endl;
	
	msi.erase("a");
	print(msi);
	
	std::cout <<std::endl << "Teljes törlés utám: " << std::endl;
	msi.erase(msi.begin(), msi.end());
	print(msi);
	
	std::cout <<std::endl << "Adj meg 10 kulcs értékpárt " << std::endl;
	read_map(msi);
	std::cout <<std::endl << "A megadott map: " << std::endl;
	print(msi);
	
	int total = std::accumulate(msi.begin(), msi.end(), 0, 
		[](int sum, const std:: pair<std::string, int>& p)
		{return sum += p.second;}
		);
	
	
	int total12 = 0;
	for(std::pair<std::string, int> a : msi){
		total12 += a.second;
	}

	std::cout <<std::endl << "Sum of ints: " << total << " " << total12 << std::endl;

	std::map<int, std::string> mis;
	for(const auto&a :msi){
		mis[a.second] = a.first;
		//m.insert(std::make_pair(a.second,a.first));
	}

	std::cout<< "mis map:" << std::endl;
	print(mis);










} catch (std::exception& e) {
	std::cerr << "Exception: " << e.what() << '\n';
	return 1;
} catch (...) {
    std::cerr << "Unknown exception\n";
	return 2;
}
