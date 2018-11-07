#include "name.h";
#include <cstring>
#include <iostream>

using namespace std;
Name::Name(const char *p) : mlen{ strlen(p) }, mp{ new char[mlen + 1] } {
	strcpy(mp, p);
} 
Name::Name(const Name &r) : mlen{ r.mlen }, mp{ new char[mlen + 1]} {
	strcpy(mp, r.mp);
}
void Name::display()const {
	cout << mp << endl;
}
size_t Name::size()const {
	return mlen;
}