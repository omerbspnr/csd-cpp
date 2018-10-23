#include <iostream>
using namespace std;

class Myclass {
	static int x;
public:
	void func() {
		cout << "func" << endl;
	}
	void func() const {
		cout << "const func" << endl;
	}
};


int main()
{
	Myclass myclass;
	const Myclass myclass1;

	myclass.func();

	myclass1.func();

}