#include <iostream>

using namespace std;

int main(void) {
	int arr[4] = {10, 20, 30, 40};
	char str[4] = "abc";

	//주소값 4바이트 만큼의 차이
	printf("%d %d \n", &arr[0], &arr[1]);
	//주소값 1바이트 만큼의 차이
	printf("%d %d \n", &str[0], &str[1]);
	//	printf("%d %d \n", *(str+0), *(str+1));
	//arr+0에는 차이가 없음

	int i = 1;
	char c = 'b';
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	//각각 4, 1, 8 차이
	printf("%d %d %d \n", pi, pc, pd);
	printf("%d %d %d \n", pi+1, pc+1, pd+1);
//	printf("%d %d %d \n", sizeof(pi), sizeof(pc), sizeof(pd));

	printf("%f %f %f\n", i, c, d);
	printf("%f %f %f\n", i+1, c+1, d+1);

	pi = arr;
	printf("%d %d \n", pi + 1, arr + 1);
	printf("%d %d \n", (*pi + 1), *(arr + 1));
	printf("%d %d \n", pi[1], arr[1]);

	return 0;

}