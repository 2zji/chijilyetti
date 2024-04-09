#include <iostream>
#include <string>
using namespace std;

struct Student {
	int hakbun_;
	string name_;
};

int main(void) {
	struct Student junseok;
	//구조체는 default가 public이다.
	junseok.hakbun_ = 21;
	junseok.name_ = "여준석";
}