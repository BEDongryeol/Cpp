#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char a[20] = "I like you";
	char b[20] = "like";
	// 찾은 문자열 이후 모든 문자열을 출력
	printf("찾은 문자열: %s\n", strstr(a, b));

	system("pause");
	return 0;
}

// gets()의 보안 취약성을 보완
/* gets_s(a, sizeof(a));
	printf("%s\n", a); */

// strcat
/* 	char a[60] = "My name is";
	char b[20] = "Dongryeol Jeong";
	strcat(a, b);
	printf("%s\b", a);*/