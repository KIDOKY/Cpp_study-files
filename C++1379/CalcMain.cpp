/* [3장 연습문제 10번 (2)번 작성 과제]
*	두 정수와 연산자를 입력하세요>> 3 4 *
*	결과 = 12
*/
#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
using namespace std;

int main()
{
	Add a; Sub s; Mul m; Div d;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>> ";
		int x, y;
		char c;
		cin >> x >> y >> c;
		switch (c) {
		case '+':
			a.setValue(x, y);	//클래스의 멤버변수 a,b에게 x,y 값 전달
			cout << a.Calculate();
			break;
		case '-':
			s.setValue(x, y);	//클래스의 멤버변수 a,b에게 x,y 값 전달
			cout << s.Calculate();
			break;
		case '*':
			m.setValue(x, y);	//클래스의 멤버변수 a,b에게 x,y 값 전달
			cout << m.Calculate();
			break;
		case '/':
			d.setValue(x, y);	//클래스의 멤버변수 a,b에게 x,y 값 전달
			cout << d.Calculate();
			break;
		default:
			cout << "잘못 입력하였습니다." << endl;
		}
	}

	return 0;
}