#include <iostream>
#include<string>

int main(void) {

	std::string str = "develop hungry";
	std::string str2;
	//str�� �ִ� ������ str2�� ����
	//'\0'�� ���� �� ����
	str2 = str;

	std::cout << str2;

	//str2[0] = str[0];
	//str2[1] = str[1];
	//str2[2] = str[2];

}