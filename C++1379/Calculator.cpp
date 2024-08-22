/* [3장 연습문제 10번 (1)번 작성 과제]
*	두 정수와 연산자를 입력하세요>> 3 4 *
*	결과 = 12
*/
#include <iostream>
#include <string>
using namespace std;

class Add {

	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int Calculate() {
		return a + b;
	}
};
class Sub {

	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int Calculate() {
		return a - b;
	}
};
class Mul {

	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int Calculate() {
		return a * b;
	}
};
class Div {

	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int Calculate() {
		return a / b;
	}
};

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