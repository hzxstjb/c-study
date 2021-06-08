#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 使用struct关键字定义结构体类型
// struct tag{
//		member-list;
// } [variable-list](全局的结构体变量);
struct PERSON {
	// 成员变量
	char name[10];
	int age;
	char sex[5];
	char tele[12];
};
int main(void) {
	// 创建结构体变量
	struct PERSON person = {"测试1",111,"未知","13888665588"};

	printf("person name is %s\nage is %d\nsex is %s\ntele is %s\n", person.name, person.age, person.sex, person.tele);

	return 0;
}