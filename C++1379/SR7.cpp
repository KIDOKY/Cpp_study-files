//152쪽 7번 문제

#include <iostream>
#include "SR7.h"
using namespace std;

SelectableRandom::SelectableRandom(int _num) {
	num = _num;
	srand((unsigned)time(0));
}
int SelectableRandom::next() {
	int ran = rand();
	if (num % 2 == 0)
	{
		if (ran % 2 == 0)
			return ran;
		else
			return --ran;
	}
	else {
		if (ran % 2 == 0)
			return ++ran;
		else
			return ran;
	}
}
int SelectableRandom::nextinRange(int i, int h) {
	int ran = rand() % (h - i + 1) + i;
	if (num % 2 == 0)
	{
		if (ran % 2 == 0)
			return ran;
		else
			return ++ran;
	}
	else {
		if (ran % 2 == 0)
			return ++ran;
		else
			return ran;
	}
}