#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	int age = 98;

	// if

	//if (18 > age) {

	//	printf("δ����\n");
	//}



	// if ... else ...

	//if (18 > age) {
	//	printf("δ����\n");
	//}
	//else {
	//	printf("�ѳ���\n");
	//}

	// ע��:else���Ǻ������δ��ƥ���if����ƥ��
	if (age < 18) {
		printf("δ����\n");
	}
	else if (age < 60) {
		printf("������\n");
	}
	else if (age < 90) {
		printf("������\n");
	}
		else // ���Ƿ������޹�
	{
		printf("������\n");
	}

	return 0;
}