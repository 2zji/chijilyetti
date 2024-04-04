#include<stdio.h>
#include<string.h>

int main(void) {
	char str[30] = "c";
	//기존 문지열에다 추가
	strcat(str, "addition");

	printf("%s", str);
}