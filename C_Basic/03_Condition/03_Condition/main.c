#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// SWITCH��

int main(void) {
	printf("���� �Է��ϼ���. \n");
	int a;
	scanf("%d", &a);

	switch (a) {
	case 1: case 2: case 3:
		printf("�� �Դϴ�. \n"); break;
	case 4: case 5: case 6:
		printf("���� �Դϴ�. \n"); break;
	case 7: case 8: case 9:
		printf("���� �Դϴ�. \n"); break;
	case 10: case 11: case 12:
		printf("�ܿ� �Դϴ�. \n"); break;
	default:
		printf("�ùٸ��� �Է��ϼ���. \n");
	}


	system("pause");

}


// IF��
//int main(void) {
//	int a;
//	printf("���� �޸� ũ�⸦ �Է��ϼ���. \n");
//	scanf("%d", &a);
//
//	if (a >= 16) {
//		printf("���� �޸� ũ�Ⱑ ����մϴ�. \n");
//	}
//
//	else {
//		printf("���� �޸𸮸� �����ϼ���. \n");
//	}
//		
//	system("pause");
//	return 0;
//}