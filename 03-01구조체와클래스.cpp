#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	//������: ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڴ� ��ȯ���� ����, �Լ� �̸��� Ŭ���� �̸�
	Student() {
		hakbun_ = 20;
		name_ = "Yeo";
	}

	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		
		name_ = name;
	}

	//Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}
private:
	int hakbun_;
	string name_;
};

int main(void) {
	Student junseok = Student(21, "���ؼ�");
	Student  Yeo = Student();

	junseok.show();
	Yeo.show();

	return 0;
}