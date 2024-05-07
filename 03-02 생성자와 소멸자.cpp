#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:

	Student(int hakbun, const char* name) : hakbun_(hakbun) {
		int length = strlen(name);

		//'/0'�� ���� ���� ���� �ϳ� �� �߰�
		name_ = new char[length + 1];
		strcpy(name_, name);	//�̻��� ���� ���
		cout << "������ ȣ�� �Ϸ�" << endl;
	}

	//���������(���� ����)
	Student(const Student& rhs) : hakbun_(rhs.hakbun_), name_(rhs.name_) {
		
		int length = strlen(rhs.name_);
		name_ = new char[length + 1];
		strcpy[name_, rhs.name_];
		
		cout<<"��������� ȣ��"<< endl;
	}

	//�Ҹ���: ��ü�� �Ҹ��� ��(�޸𸮿��� ������ ��)ȣ��Ǵ� �Լ�
	~Student(void) {
		//HACK: ���� ����� ���Ͽ� �̹� ���ŵ� ������ �� �����Ϸ��� �ؼ� ���� �߻�
		delete[]name_;
		cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;
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

	//�Ϲݻ�����
	Student stu1 = Student1(1111, "JWP");
	stu1.show();
	//���������
	Student stu2 = Student1(stu1);
	stu2.show();

	/*
	int b = 2;
	int ab = 4;
	int& cc = ab;
	cc = b;

	Student* junseok;
	junseok = new Student(2207, "������");
	cout << "I'm still hungry -�����-" << endl;
	junseok->show();

	delete junseok;
	cout << "����Ŀ�" << endl;
	*/

	return 0;
}