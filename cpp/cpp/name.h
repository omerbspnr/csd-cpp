#ifndef NAME_INCLUDED
#define NAME_INCLUDED
	
class Name {
	size_t mlen;
	char *mp;
public:
	Name(const char *p);
	
	Name(const Name &r);
	Name(Name &&r);
	Name & operator =(const Name &r);
	Name & Name::operator=(Name &&r);

	Name operator+(const Name &r1)const;

	friend Name operator+(const char*p, const Name &r);

	size_t size()const;
	void display()const;

	~Name();
};

Name operator+(const char*p, const Name &r);

#endif