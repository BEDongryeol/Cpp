#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// ���ڿ��� ���Ե� char ���� ����ϱ�
int main(void) {
	char a[] = "Hello world";
	int count = 0;
	for (int i = 0; i <= 10; i++) {
		if (a[i] == 'l') count++;
	}
	printf("���ڿ� a�ȿ� 'l'�� ������ %d�� �̴�. \n", count);
	system("pause");
	return 0;
}


/* �ڷ��� char�� �迭�� ���� string ���� @C
int main(void) {
	char a[20] = "Hello World";
	a[5] = "\,";
	printf("%s\n", a);
	system("pause");
	return 0;
}*/


/* �迭 �� �ִ� �ּҰ� ã��
 int main(void) {
	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
	int i, maxValue = INT_MIN;
	for (i = 0; i < 10; i++) {
		if (maxValue < a[i]) maxValue = a[i];
	}
	printf("�迭 a �� �ִ밪�� %d�Դϴ�. \n", maxValue);
	system("pause");
	return 0;
}*/