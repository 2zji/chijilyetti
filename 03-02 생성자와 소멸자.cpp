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
		cout << "생성자 호출 완료" << endl;
	}

	//복사생성자(얕은 복사)
	Student(const Student& rhs) : hakbun_(rhs.hakbun_), name_(rhs.name_) {
		
		int length = strlen(rhs.name_);
		name_ = new char[length + 1];
		strcpy[name_, rhs.name_];
		
		cout<<"복사생성자 호출"<< endl;
	}

	//소멸자: 객체가 소멸할 때(메모리에서 지위질 때)호출되는 함수
	~Student(void) {
		//HACK: 얕은 복사로 인하여 이미 제거된 공간을 또 제거하려고 해서 에러 발생
		delete[]name_;
		cout << "소멸자 호출 완료" << endl;
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

	//일반생성자
	Student stu1 = Student1(1111, "JWP");
	stu1.show();
	//복사생성자
	Student stu2 = Student1(stu1);
	stu2.show();

	/*
	int b = 2;
	int ab = 4;
	int& cc = ab;
	cc = b;

	Student* junseok;
	junseok = new Student(2207, "윤예지");
	cout << "I'm still hungry -배고파-" << endl;
	junseok->show();

	delete junseok;
	cout << "배고파영" << endl;
	*/

	return 0;
}