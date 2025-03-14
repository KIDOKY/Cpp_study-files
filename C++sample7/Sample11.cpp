#include <iostream>
using namespace std;

//buy 함수 선언
void  buy(int x = 10);

//buy 함수 호출
int main() {
    cout << "처음 구매가는 100만원입니다.\n";
    buy(100);

    cout << "두 번째 구매가는 기본가입니다.\n";
    buy();

    return 0;
}

//buy 함수 정의
void buy(int x) {
    cout << x << "만 원짜리 차량을 구입했습니다.\n";
}