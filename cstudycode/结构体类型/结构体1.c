#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ʹ��struct�ؼ��ֶ���ṹ������
// struct tag{
//		member-list;
// } [variable-list](ȫ�ֵĽṹ�����);
struct PERSON {
	// ��Ա����
	char name[10];
	int age;
	char sex[5];
	char tele[12];
};
int main(void) {
	// �����ṹ�����
	struct PERSON person = {"����1",111,"δ֪","13888665588"};

	printf("person name is %s\nage is %d\nsex is %s\ntele is %s\n", person.name, person.age, person.sex, person.tele);

	return 0;
}