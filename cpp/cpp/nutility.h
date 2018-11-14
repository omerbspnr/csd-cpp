#ifndef NUTILITY_INCLUDED
#define NUTILITY_INCLUDED
#include <iostream>

std::ostream &sl(std::ostream &);

bool isprime(int val);

void randomize();

template<typename T,size_t size>
constexpr size_t asize(T(&a)[size])
{
	return size;
}



#endif