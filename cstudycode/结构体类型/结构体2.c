#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct Student {
	char name[10];
	short age;
	char sex[5];
	char tele[12];
} s1;	// 全局的结构体类型变量s1

// 使用typedef关键字,做类型的重命名
typedef struct Person {
	char name[10];
	short age;
	char sex[5];
	char tele[12];
} PER;

// 参数是一个结构体指针
void PRINT1(PER* p) {
	// 使用 -> 运算符,表示指针所指向的那个对象的成员
	printf("name is %s, age is %d, sex is %s, tele is %s\n", p->name, p->age, p->sex, p->tele);
}

// 参数是一个结构体类型变量
void PRINT2(struct Student s) {
	// 使用 . 运算符,表示对象所拥有的成员
	printf("name is %s, age is %d, sex is %s, tele is %s\n", s.name, s.age, s.sex, s.tele);
}
 int main(int argc, char const *argv[])
 {
	 struct Student s2 = { "测试1",12,"未知","12765888" };
	 // 相当于语句struct Person p = { "测试2",12,"未知","12765394" };
	 PER p = { "测试2",12,"未知","12765394" };

	 // 结构体传参
	 PRINT1(&p);	// 参数为指针地址
	 PRINT2(s2);	// 参数为对象
 	return 0;
 }