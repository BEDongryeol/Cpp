#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char a[20] = "I like you";
	char b[20] = "like";
	// ã�� ���ڿ� ���� ��� ���ڿ��� ���
	printf("ã�� ���ڿ�: %s\n", strstr(a, b));

	system("pause");
	return 0;
}

// gets()�� ���� ��༺�� ����
/* gets_s(a, sizeof(a));
	printf("%s\n", a); */

// strcat
/* 	char a[60] = "My name is";
	char b[20] = "Dongryeol Jeong";
	strcat(a, b);
	printf("%s\b", a);*/