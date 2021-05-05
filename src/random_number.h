#include <iostream> 

int random_number(int lo, int hi) {
	return rand() % (hi - lo) + lo;
}