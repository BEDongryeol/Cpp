#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int** p = (int**)malloc(sizeof(int*) * 3); // sizeof(int*) : 1���� �迭 >> 1���� ��
	for (int i = 0; i < 3; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * 3);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			*(*(p + i) + j) = i * 3 + j;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}

	system("pause");
	return 0;
}


/*	int* a = malloc(sizeof(int));
	printf("%d\n", a);

	// �Ҵ�� �ּҸ� ��ȯ���־�� memory leak�� ����
	free(a);

	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
*/