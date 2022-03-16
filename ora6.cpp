#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
struct S{
	S(T vv = 0) : val{vv} {}

	T& get();
	const T& get() const;
	void set(T new_t) {val = new_t;}
	S<T>& operator=(const T& s);
	
	private:
		T val;


};

template<typename T> 
T& S<T>::get(){
	return val;
};
template<typename T> 
const T& S<T>::get() const{
	return val;
};
	
template<typename T>
S<T>& S<T>::operator=(const T& s){
	val = s;
	return *this;
};
template<typename T> void read_val(T& v){
	cin>> v;

};
template<typename T>
std::ostream<<(ostrewam& os, vector<T>& v){}
	os << "{ ";
	for (int i = 0, i< v.size(); ++i){
		os << v[i] << (i < v.size()-1 ? ", ": " ");
	}
	os << "}\n";
	return os;

}
template<typename T>
istream& operator>>(istream& is, vector<T>& v)
{
	char ch = 0
	is >> ch;
	if( ch != '{'){
	
	}

}


	
int main(){

	
	S<int> s;
	S<int> si {37};
	S<char> sc {'c'};
	S<double> sd {10.2};
	S<std::string> ss{"Helo"};
	S<std::vector<int>> svi { std::vector<int>{1, 1, 2, 3, 5, 8}};

	cout << "S<int> : " << s.get() <<endl
	     << "S<int> : " << si.get() <<endl
	     << "S<char> : " << sc.get() <<endl
	     << "S<double> : " << sd.get() <<endl
	     << "S<string> : " << ss.get() <<endl;
	     //<< "S<vector<int>> : " << svi.get() <<endl

	cout<< "S<vector<int>> : ";
	for(auto& a : svi.get()){
		cout << a << ' ';
	}
	
	cout << endl;
	
	sc.set('s');
 	cout <<"S<char> : " << sc.get() <<endl;
 	
 	sd = 3.1416;
 	
 	cout << "S<double> : " << sd.get() <<endl;
 	
 	int ii;
 	read_val(ii);
 	S<int> si2 {ii};

	char cc;
	read_val(cc);
	S<char> ci2 {cc};
	
	double dd;
	read_val(dd);
	S<double> di2 {dd};
	
	cout << "S<int> : " << si2.get() <<endl
	     << "S<char> : " << ci2.get() <<endl
	     << "S<double> : " << di2.get() <<endl;
	     
	cout << "S<vector<int>> : ";
	


  






}








