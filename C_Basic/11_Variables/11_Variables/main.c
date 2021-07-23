#include <stdio.h>

/* 전역함수 main밖에서 지정
int a = 5;

void changeValue() {
	a = 10;
}
*/

/* 정적변수 선언 static
void process() {
	static int s = 5;
	s = s + 1;
	printf("%d\n", s);
}
*/


int main(void) {
	/*
	if (1) {
		지역변수 if문 안에서만 5로 인식된다.
		// 공통적인 a를 사용하고 싶으면 int a 가 아닌 a를 사용
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