#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// ����1.����bug:��������س���ֱ�����ȡ��
	//char password[10] = { 0 };
	//char ret = 0;
	//printf("����������:\n");
	//scanf("%s", password);
	//printf("��ȷ���������(Y/N)?\n");
	//scanf("%c", &ret);
	//// ������Ϊ:ȡ��. ��Ϊret = 10(ascii�лس���ֵ��10)
	//if (ret == 'Y')
	//	printf("ȷ��.\n");
	//else
	//	printf("ȡ��.\n");

	// ����2.�Ľ������������bug,ԭ�������뻺������ȡʱ�س�Ҳ����һ���ַ�����ȡ
	//char password[10] = { 0 };
	//char ret = 0;
	//printf("����������:\n");
	//scanf("%s", password);
	//printf("��ȷ���������(Y/N)?\n");
	//getchar();	// �Ľ�����,���getchar();���س���ǰ��ȡ��
	//// ������������м��и��ո��ǻ��Ǵ���bug,��ֱ�����ȡ��.
	//scanf("%c", &ret);
	//// ������Ϊ:ȡ��.
	//if (ret == 'Y')
	//	printf("ȷ��.\n");
	//else
	//	printf("ȡ��.\n");

	// ����3.
	char password[10] = { 0 };
	char ret = 0;
	printf("����������:\n");
	scanf("%s", password);
	printf("��ȷ���������(Y/N)?\n");
	// �������
	while (getchar() != '\n') {
		;
	}
	scanf("%c", &ret);
	if (ret == 'Y')
		printf("ȷ��.\n");
	else
		printf("ȡ��.\n");
	return 0;
}