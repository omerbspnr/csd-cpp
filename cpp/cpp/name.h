#ifndef NAME_INCLUDED
#define NAME_INCLUDED
	
class Name {
	size_t mlen;
	char *mp;

	Name(const char *p);
	Name(const Name &r);

	size_t size()const;
	void display()const;


	~Name();
};

#endif