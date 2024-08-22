#include <iostream>
#include "Sub.h"
using namespace std;
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::Calculate() {
	return a - b;
}