#include <stdio.h>

typedef struct {
	char studnedId[10];
	char name[10];
	int grade;
	char major[100];
} Student ;

int main(void) {
	// 동적할당을 이용한 구조체 포인터 변수에 접근
	Student* s = malloc(sizeof(Student));
	strcpy(s->studnedId, "20141158");
	strcpy(s->name, "정동렬");
	s->grade = 4;
	strcpy(s->major, "산업공학과");


	printf("학번 : %s\n", s->studnedId);   //s는 포인터이기 때문에 s가 가리키는 메모리 주소
	printf("이름 : %s\n", s->name);        // 화살표 (->) 사용
	printf("학점 : %d\n", s->grade);
	printf("전공 : %s\n", s->major);



	system("pause");
	return 0;
}


/*	Student s; //구조체 변수 선언
	strcpy(s.studnedId, "20141158"); //변수에 접근 시에는 .을 사용
	strcpy(s.name, "정동렬");
	s.grade = 4;
	strcpy(s.major, "산업공학과");
	
	printf("학번 : %s\n", s.studnedId);
	printf("이름 : %s\n", s.name);
	printf("학점 : %d\n", s.grade);
	printf("전공 : %s\n", s.major);*/