#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// SWITCH문

int main(void) {
	printf("월을 입력하세요. \n");
	int a;
	scanf("%d", &a);

	switch (a) {
	case 1: case 2: case 3:
		printf("봄 입니다. \n"); break;
	case 4: case 5: case 6:
		printf("여름 입니다. \n"); break;
	case 7: case 8: case 9:
		printf("가을 입니다. \n"); break;
	case 10: case 11: case 12:
		printf("겨울 입니다. \n"); break;
	default:
		printf("올바르게 입력하세요. \n");
	}


	system("pause");

}


// IF문
//int main(void) {
//	int a;
//	printf("메인 메모리 크기를 입력하세요. \n");
//	scanf("%d", &a);
//
//	if (a >= 16) {
//		printf("메인 메모리 크기가 충분합니다. \n");
//	}
//
//	else {
//		printf("메인 메모리를 증설하세요. \n");
//	}
//		
//	system("pause");
//	return 0;
//}