#include <iostream>
#include "Add.h"
using namespace std;
void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::Calculate() {
	return a + b;
}