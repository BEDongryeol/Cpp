#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// 문자열에 포함된 char 개수 출력하기
int main(void) {
	char a[] = "Hello world";
	int count = 0;
	for (int i = 0; i <= 10; i++) {
		if (a[i] == 'l') count++;
	}
	printf("문자열 a안에 'l'의 개수는 %d개 이다. \n", count);
	system("pause");
	return 0;
}


/* 자료형 char의 배열을 통한 string 구현 @C
int main(void) {
	char a[20] = "Hello World";
	a[5] = "\,";
	printf("%s\n", a);
	system("pause");
	return 0;
}*/


/* 배열 내 최대 최소값 찾기
 int main(void) {
	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
	int i, maxValue = INT_MIN;
	for (i = 0; i < 10; i++) {
		if (maxValue < a[i]) maxValue = a[i];
	}
	printf("배열 a 내 최대값은 %d입니다. \n", maxValue);
	system("pause");
	return 0;
}*/