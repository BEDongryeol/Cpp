#include <stdio.h>

typedef struct {
	char studnedId[10];
	char name[10];
	int grade;
	char major[100];
} Student ;

int main(void) {
	// �����Ҵ��� �̿��� ����ü ������ ������ ����
	Student* s = malloc(sizeof(Student));
	strcpy(s->studnedId, "20141158");
	strcpy(s->name, "������");
	s->grade = 4;
	strcpy(s->major, "������а�");


	printf("�й� : %s\n", s->studnedId);   //s�� �������̱� ������ s�� ����Ű�� �޸� �ּ�
	printf("�̸� : %s\n", s->name);        // ȭ��ǥ (->) ���
	printf("���� : %d\n", s->grade);
	printf("���� : %s\n", s->major);



	system("pause");
	return 0;
}


/*	Student s; //����ü ���� ����
	strcpy(s.studnedId, "20141158"); //������ ���� �ÿ��� .�� ���
	strcpy(s.name, "������");
	s.grade = 4;
	strcpy(s.major, "������а�");
	
	printf("�й� : %s\n", s.studnedId);
	printf("�̸� : %s\n", s.name);
	printf("���� : %d\n", s.grade);
	printf("���� : %s\n", s.major);*/