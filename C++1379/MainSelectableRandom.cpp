//152쪽 7번 문제

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "SR7.h"
using namespace std;

int main()
{
	SelectableRandom r1(0);
	cout << "---0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 생성 ---" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r1.next();
		cout << n << ' ';
	}

	SelectableRandom r2(1);
	cout << endl << endl << "---2에서 9까지의 랜덤 홀수 정수 10개 생성 ---" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r2.nextinRange(2, 9);
		cout << n << ' ';
	}

	return 0;
}