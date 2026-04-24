#include <iostream> 
#include <cmath> 

class Math_self {
public:
	static double hipotenusa(double a, double b) {
		return sqrt(pow(a, 2) + pow(b, 2));
	};
		

};



int main() {
	double a; 
	double b; 
	double c;
	std::cout << "inserte valores" << std::endl; 
	std::cin >> a; 
	std::cin >> b; 
	c = Math_self::hipotenusa(a,b); 
	std::cout << "resultado " << c; 
	return 0;

}
