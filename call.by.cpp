#include <iostream>

//�̸�����, std::�� ���ص� �ȴ�
using namespace std;

void call_by_value(int* val) {
	//���ο� �������� val�� ����� ���⿡ 10�� ����
	//val�� ����Ű�� �ִ� ����� ���� �ٲ�
	*val = 10;
	
}

int main(void) {
	int num = 4;
	//num�� ���� �ٲ��� �ʴ´�
	call_by_value(&num);
	cout << num;

	return 0;
}