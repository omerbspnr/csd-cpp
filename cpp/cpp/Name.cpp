#include "name.h";
#include <cstring>
#include <iostream>

using namespace std;
Name::Name(const char *p) : mlen{ strlen(p) }, mp{ new char[mlen + 1] } {
	cout << "ctor " << endl;
	strcpy(mp, p);
} 
Name::Name(const Name &r) : mlen{ r.mlen }, mp{ new char[mlen + 1]} {
	cout << "copy" << endl;
	strcpy(mp, r.mp);
}

Name::Name(Name &&r) : mlen{ r.mlen }, mp{ r.mp } {
	cout << "move ctor" << endl;
	r.mp = nullptr;
}
void Name::display()const {
	cout << mp << endl;
}
size_t Name::size()const {
	return mlen;	
}
Name::~Name() {
	cout << "Name::~Name()" << endl;
	if(mp)
		delete[] mp;
}
Name & Name::operator=(const Name &r) {
	cout << "copy assignment" << endl;
	if (this != &r) {

		size_t temp_len = r.mlen;
		char *temp_p = mlen ? new char[mlen + 1] : nullptr;
		strcpy(temp_p, r.mp);

		delete[] mp;
		mlen = temp_len;
		mp = temp_p;
	}

	return *this;
}

Name & Name::operator=(Name &&r) {
	cout << "move assignment" << endl;
	if (this != &r) {
		delete[] mp;
		mlen = r.mlen;
		mp = r.mp;
		r.mp = nullptr;
	}

	return *this;

}

Name Name::operator+(const Name &r1)const {
	auto temp_len{ mlen + r1.mlen };
	auto temp_mp{ new char[temp_len + 1] };
	
	Name myname{ temp_mp };
	
	delete[] temp_mp;
	temp_mp = nullptr;
	
	strcpy(myname.mp, mp);
	strcat(myname.mp, r1.mp);

	return myname;
}
Name operator+(const char*p, const Name &r) {
	return  p  + r;
}
