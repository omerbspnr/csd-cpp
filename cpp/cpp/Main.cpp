#include <iostream>
using namespace std;



int main() {
	char arr[] = "merhaba d�nya";

	cout << typeid(reinterpret_cast<const char *>(arr)).name() << endl;
	
	


}