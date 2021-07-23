#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// 중첩 반복문 (구구단 구현)
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


// While문
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

// For 문
//int main(void) {
//	int n, sum = 0;
//	printf("n을 입력하세요. ");
//	scanf("%d", &n);
//	
// for (int i = 1; i <= n; i++) {
//		sum = sum + i;
//	}
// 
//	printf("%d까지의 합은 % d입니다. ", n, sum);
//
//	system("pause");
//	return 0;
//}

