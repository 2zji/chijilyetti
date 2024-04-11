#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	//������: ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڴ� ��ȯ���� ����, �Լ� �̸��� Ŭ���� �̸�

	// ������� �ʱ�ȭ : ��ü������ ���ÿ� ������� ����
	// const/���� ��������� �ʱ�ȭ �� �� �ִ�.
	Student(int hakbun, string name) : hakbun_(hakbun), name_(name) {

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
	Student* junseok = new Student[3]{
	{21, "���ؼ�"},
	{3, "���"},
	{2215, "choo"}
	};

		for(int i = 0; i<3; i++)
			junseok[i].show();

	//�����Ҵ� ����
	delete []junseok;

	return 0;
}