#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct Student {
	char name[10];
	short age;
	char sex[5];
	char tele[12];
} s1;	// ȫ�ֵĽṹ�����ͱ���s1

// ʹ��typedef�ؼ���,�����͵�������
typedef struct Person {
	char name[10];
	short age;
	char sex[5];
	char tele[12];
} PER;

// ������һ���ṹ��ָ��
void PRINT1(PER* p) {
	// ʹ�� -> �����,��ʾָ����ָ����Ǹ�����ĳ�Ա
	printf("name is %s, age is %d, sex is %s, tele is %s\n", p->name, p->age, p->sex, p->tele);
}

// ������һ���ṹ�����ͱ���
void PRINT2(struct Student s) {
	// ʹ�� . �����,��ʾ������ӵ�еĳ�Ա
	printf("name is %s, age is %d, sex is %s, tele is %s\n", s.name, s.age, s.sex, s.tele);
}
 int main(int argc, char const *argv[])
 {
	 struct Student s2 = { "����1",12,"δ֪","12765888" };
	 // �൱�����struct Person p = { "����2",12,"δ֪","12765394" };
	 PER p = { "����2",12,"δ֪","12765394" };

	 // �ṹ�崫��
	 PRINT1(&p);	// ����Ϊָ���ַ
	 PRINT2(s2);	// ����Ϊ����
 	return 0;
 }