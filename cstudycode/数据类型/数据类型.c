#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// �ַ���:�õ������������ĵ����ַ�
	char ch = 'A';
	printf("%c = %d\n", ch,ch);
	// charռ1���ֽ�
	printf("char����ռ��%d���ֽ�\n", sizeof(ch));	//sizeof(����������)����ռ���ڴ��ֽ���
	// ����
	short sint = -10;
	unsigned short usint = 10;	// �����޷���ʹ�ùؼ���unsigned
	int iint = -10;		// ����Ĭ������Ϊint
	long lint = -10L;	// long��������������l��L����
	printf("%d, %d, %ld\n", usint, iint, lint);
	// long long llint = 10;
	// shortռ2���ֽ�, intռ4���ֽ�, long�涨���ڻ����int����,���Ҳ��ռ��4���ֽ�
	printf("short int����ռ��%d���ֽ�, int����ռ��%d���ֽ�, long int����ռ��%d���ֽ�\n", sizeof(sint), sizeof(iint), sizeof(lint));
	// ������
	float f = 3.33F;	// ������������f��F����
	double d = 6.31;	// ������Ĭ������Ϊdouble
	// floatռ4���ֽ�, doubleռ8���ֽ�
	printf("float����ռ��%d���ֽ�, double����ռ��%d���ֽ�\n", sizeof(f), sizeof(d));
	return 0;
}