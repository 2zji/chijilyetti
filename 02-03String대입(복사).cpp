#include <stdio.h>
#include<string.h>

int main(void) {
	char str[30] = "develop hungry";
	char str2[30];
	//str�� �ִ� ������ str2�� ����
	//'\0'�� ���� �� ����
	strcpy(str2, str);

	/*
	int i = 0;
	for (; str[i] != '\0'; i++){
		str2[i] = str[i];
	}
	str2[i] = str[i];	//�ι���('\0') ����
	printf("%s", str2);
	*/

	//str2[0] = str[0];
	//str2[1] = str[1];
	//str2[2] = str[2];

}