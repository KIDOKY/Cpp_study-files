#include <iostream>
#include "Div.h"
using namespace std;
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::Calculate() {
	return a / b;
}