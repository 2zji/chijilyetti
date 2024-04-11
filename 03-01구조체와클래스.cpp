#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	//생성자: 객체가 생성될 때 호출되는 함수
	//생성자는 반환형이 없다, 함수 이름은 클래스 이름
	Student() {
		hakbun_ = 20;
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
	int hakbun_;
	string name_;
};

int main(void) {
	Student junseok = Student(21, "여준석");
	Student  Yeo = Student();

	junseok.show();
	Yeo.show();

	return 0;
}