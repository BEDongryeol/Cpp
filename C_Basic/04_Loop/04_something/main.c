#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// ��ø �ݺ��� (������ ����)
int main(void) {
	
	int i = 1;
	while (i <= 9) {
		int j = 1;
		while (j <= 9) {
			printf("%d * %d = %d\n", i, j, j * j);
			j++;
		}
		printf("\n");
		i++;
	}
	system("pause");
	return 0;
}


// While��
//int main(void) {
//	int n;
//	char a;
//	scanf("%d %c", &n, &a);
//
//	while (n--) {
//		printf("%c", a);
//	}
//
//	system("pause");
//	return 0;
//}

// For ��
//int main(void) {
//	int n, sum = 0;
//	printf("n�� �Է��ϼ���. ");
//	scanf("%d", &n);
//	
// for (int i = 1; i <= n; i++) {
//		sum = sum + i;
//	}
// 
//	printf("%d������ ���� % d�Դϴ�. ", n, sum);
//
//	system("pause");
//	return 0;
//}

