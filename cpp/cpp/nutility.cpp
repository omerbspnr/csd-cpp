#include "nutility.h"
#include <time.h>


bool isprime(int val) {
	if (!val || val == 1) {
		return false;
	}

	if (val %2 == 0) {
		return val == 2;
	}

	if (val % 3 == 0) {
		return val == 3;
	}

	if (val % 5 == 0) {
		return val == 5;
	}

	for (size_t k = 7; k * k < val; k += 2) {
		if (val % k == 0) {
			return false;
		}
	}

	return true;

}
void randomize() {
	srand(static_cast<unsigned>(time(nullptr)));
}