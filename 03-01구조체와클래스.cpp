#include <iostream>
#include <string>
using namespace std;

struct Student {
	int hakbun_;
	string name_;
};

int main(void) {
	struct Student junseok;
	//����ü�� default�� public�̴�.
	junseok.hakbun_ = 21;
	junseok.name_ = "���ؼ�";
}