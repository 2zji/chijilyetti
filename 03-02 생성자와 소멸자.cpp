#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:

	Student(int hakbun, const char* name) : hakbun_(hakbun) {
		int length = strlen(name);

		//'/0'가 들어가기 위해 공간 하나 더 추가
		name_ = new char[length + 1];

		strcpy(name_, name);	//미사용시 한자 출력
	}

	//소멸자: 객체가 소멸할 때(메모리에서 지위질 때)호출되는 함수
	~Student(void) {
		delete[]name_;
	}

	//클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << endl;

	}
private:
	int hakbun_;
	char* name_;
};

int main(void) {
	Student* junseok;
	junseok = new Student(2207, "윤예지");
	delete junseok;

	return 0;
}