#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	//�����ڿ��� �����Ҵ��� �� �޸� ������ ���� �� ����
	Student(int hakbun, const char* name) : hakbun_(hakbun) {
		int length = strlen(name);

		//'/0'�� ���� ���� ���� �ϳ� �� �߰�
		name_ = new char[length + 1];

		strcpy(name_, name);
	}

	//Ŭ������ ����� ���
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

	//TODO: �����ڿ��� �����Ҵ��� �� �޸� ������ ���� �� ����
	Student* junseok = new Student(22, "YJS");
	junseok->show();
	delete junseok;

	return 0;
}