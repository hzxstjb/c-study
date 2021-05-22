#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	
	int age = 0;
	char name[10] = { 0 };
	printf("请输入你的姓名\n");
	scanf("%s", name);
	printf("请输入你的年龄\n");
	scanf("%d", &age);

	printf("你的名字叫:%s, 你的年龄:%d\n", name, age);
	return 0;
}