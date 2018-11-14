#include<iostream>
#include <string>
#include <memory>

class Myclass {
public:
	Myclass() {
		std::cout << "Myclass ctor" << std::endl;
	}
	Myclass(int m) {
		std::cout << "Myclass" << std::endl;
	}
	Myclass(const Myclass &r) {
		std::cout << "const Myclass" << std::endl;
	}
	Myclass( Myclass &&r) {
		std::cout << "Myclass &&" << std::endl;
	}
	~Myclass() {
		std::cout << "Myclass::~Myclass()" << std::endl;
	}
};

void foo(Myclass &m) {

}



int main() {
	const Myclass m;
	foo(const_cast<Myclass *>(&m));
} 