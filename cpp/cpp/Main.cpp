#include <iostream>
#include <string>
#include "name.h"
#include <iostream>
#include <string>
#include <cstring>
#include <iterator>
#include <list>

#include "nutility.h"

using namespace std;

class Address {
	size_t mlen;
	char *mp;
public:
	Address(const char *pa) : mlen{ strlen(pa) }, mp{ new char[mlen + 1] }
	{
		strcpy(mp, pa);
	}

	~Address()
	{
		delete[]mp;
	}

	void print()const
	{
		std::cout << "Adres = " << mp << endl;
	}
	size_t getlen()const
	{
		return mlen;
	}
	///
};

void func(Address a)
{
	std::cout << "func cagrildi\n";
	a.print();
	std::cout << "func sona erdi\n";
	getchar();
}

int main()
{
	Address a1{ "Necati Ergin Astoria Plaza Kat 27 Esentepe" };
	cout << a1.getlen() << endl;
	a1.print();
	func(a1);

	a1.print();
}




