#include <iostream>

//이름공간, std::를 안해도 된다
using namespace std;

void call_by_value(int& val) {
	//새로운 지역변수 val을 만들고 가기에 10을 넣음
	//val거 가르키고 있는 대상의 값을 바꿈
	val = 10;
	
}

int main(void) {
	int num = 4;
	//num의 값은 바뀌지 않는다
	call_by_value(num);
	cout << num;

	return 0;
}