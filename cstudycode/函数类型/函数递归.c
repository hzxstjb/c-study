#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �����ĵݹ���Ǻ�������������
// �ݹ�:1,��������:��������������,�����������,������������,ֹͣ����
//	   2,���»�С
// ʵ��:����һ������, ��˳�������ӡ���
void display(int num) {
	if (num > 9) {
		display(num / 10);
	}
	printf("%d\n", num % 10);
}
int main(void) {

	int sc = 0;
	scanf("%d", &sc);

	display(sc);

	return 0;
}