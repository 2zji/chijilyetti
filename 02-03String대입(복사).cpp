#include <iostream>
#include<string>

int main(void) {

	std::string str = "develop hungry";
	std::string str2;
	//str에 있는 내용을 str2에 복사
	//'\0'을 만날 때 까지
	str2 = str;

	std::cout << str2;

	//str2[0] = str[0];
	//str2[1] = str[1];
	//str2[2] = str[2];

}