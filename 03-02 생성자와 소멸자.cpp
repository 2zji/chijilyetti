#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	//생성자에서 동적할당을 한 메모리 공간을 지울 수 없다
	Student(int hakbun, const char* name) : hakbun_(hakbun) {
		int length = strlen(name);

		//'/0'가 들어가기 위해 공간 하나 더 추가
		name_ = new char[length + 1];

		strcpy(name_, name);
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
//	Student junseok = Student(22, "YJS");
//	junseok.show();

	//TODO: 생성자에서 동적할당을 한 메모리 공간을 지울 수 없다
	Student* junseok = new Student(22, "YJS");
	junseok->show();
	delete junseok;

	return 0;
}