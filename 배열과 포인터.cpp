#include <iostream>

using namespace std;

int main(void) {
	int arr[4] = {10, 20, 30, 40};
	char str[4] = "abc";

	//�ּҰ� 4����Ʈ ��ŭ�� ����
	printf("%d %d \n", &arr[0], &arr[1]);
	//�ּҰ� 1����Ʈ ��ŭ�� ����
	printf("%d %d \n", &str[0], &str[1]);
//	printf("%d %d \n", &str+0, &str+1);
	//arr+0���� ���̰� ����
	return 0;

}