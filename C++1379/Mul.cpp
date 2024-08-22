#include <iostream>
#include "Mul.h"
using namespace std;
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::Calculate() {
	return a * b;
}