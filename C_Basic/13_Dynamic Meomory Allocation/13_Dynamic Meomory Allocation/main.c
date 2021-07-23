#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int** p = (int**)malloc(sizeof(int*) * 3); // sizeof(int*) : 1차원 배열 >> 1개의 행
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

	// 할당된 주소를 반환해주어야 memory leak을 방지
	free(a);

	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
*/