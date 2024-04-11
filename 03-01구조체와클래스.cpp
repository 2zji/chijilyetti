#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	//������: ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڴ� ��ȯ���� ����, �Լ� �̸��� Ŭ���� �̸�
	Student() {
		//this : �ڱ��ڽ��� ����Ű�� ������
		//����� ��Ȯ�ϰ� ����ų �� �ִ�.
		this->hakbun_ = 20;
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
	int hakbun_;	//���۹��(������)	_�� ����
	string name_;
};

int main(void) {
	//�����Ҵ�: �޸𸮴� heap���� �Ҵ�, ����(��Ÿ��)�� �޸� ũ�Ⱑ ������
	Student* junseok = new Student(21, "���ؼ�");

	//�����Ҵ�: �޸𸮴� stack���� �Ҵ�, ������ �� �޸� ũ�Ⱑ ������
	Student  Yeo = Student();

	junseok->show();
	Yeo.show();

	//�����Ҵ� ����
	delete junseok;

	return 0;
}