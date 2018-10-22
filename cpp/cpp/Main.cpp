#include <iostream>
using namespace std;



int main() {
	char arr[] = "merhaba dünya";

	cout << typeid(reinterpret_cast<const char *>(arr)).name() << endl;
	
	


}