#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ʹ��struct�ؼ��ֶ���ṹ������
struct PERSON {
	char* name;
	int age;
};
int main(void) {
	struct PERSON person = {"ShangHai",33};
	printf("person name is %s, age is %d\n", person.name, person.age);
	person.name = "Hzhong";
	person.age = 18;
	printf("person name is %s, age is %d\n", person.name, person.age);
	return 0;
}