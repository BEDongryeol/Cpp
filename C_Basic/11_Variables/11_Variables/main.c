#include <stdio.h>

/* �����Լ� main�ۿ��� ����
int a = 5;

void changeValue() {
	a = 10;
}
*/

/* �������� ���� static
void process() {
	static int s = 5;
	s = s + 1;
	printf("%d\n", s);
}
*/


int main(void) {
	/*
	if (1) {
		�������� if�� �ȿ����� 5�� �νĵȴ�.
		// �������� a�� ����ϰ� ������ int a �� �ƴ� a�� ���
		int a = 5;
	}
	*/

	register int a = 10, i;
	for (i = 0; i < a; i++); {
		printf("%d", i);
	}
	
	system("pause");
	return 0;
}