#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	char c;
	scanf("%d", &a);
	printf("%d\n", a);
	
	// �� �ھ� �޾Ƽ� ������ ���̰ų�(EOF), ���๮��(\n)�� ������ �Է��� ���߹Ƿ�
	// �׻� �Է� ���۸� ����ش�.
	int temp;
	while ((temp = getchar()) != EOF && temp != '\n') {};
	
	scanf("%c", &c);
	printf("%c\n", c);

	system("pause");
	return 0;
}
