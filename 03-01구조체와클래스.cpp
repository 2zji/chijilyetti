#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	//생성자: 객체가 생성될 때 호출되는 함수
	//생성자는 반환형이 없다, 함수 이름은 클래스 이름
	Student() {
		//this : 자기자신을 가리키는 포인터
		//멤버를 명확하게 가리킬 수 있다.
		this->hakbun_ = 20;
		name_ = "Yeo";
	}

	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		
		name_ = name;
	}

	//클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << endl;
		
	}
private:
	int hakbun_;	//구글방식(변수명)	_을 붙임
	string name_;
};

int main(void) {
	//동적할당: 메모리는 heap에서 할당, 실행(런타임)시 메모리 크기가 정해짐
	Student* junseok = new Student(21, "여준석");

	//정적할당: 메모리는 stack에서 할당, 컴파일 시 메모리 크기가 정해짐
	Student  Yeo = Student();

	junseok->show();
	Yeo.show();

	//동적할당 해제
	delete junseok;

	return 0;
}