#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	
	int age = 0;
	char name[10] = { 0 };
	printf("�������������\n");
	scanf("%s", name);
	printf("�������������\n");
	scanf("%d", &age);

	printf("������ֽ�:%s, �������:%d\n", name, age);
	return 0;
}