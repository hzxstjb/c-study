#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// ����һ����������
	int arrs[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arrs) / sizeof(arrs[0]);
	int targer = 5;
	int count = 0;
	// ͨ�����ֲ��ҽ����Ż�
	int left = 0;	// ��߽�����
	int right = size - 1;	// �ұ߽�����
	int center = 0;		// �м�������

	while (left <= right) {
		count++;
		center = (left + right) / 2;	// �����м�ֵ
		if (targer > arrs[center]) {
			left = center + 1;
		}
		else if (targer < arrs[center]) {
			right = center - 1;
		} else if(targer == arrs[center]) {
			printf("Ŀ��%d����������%d\n", targer, center);
			break;
		}
	}
	if (left > right) {
		printf("sorry,û���ҵ�%d\n", targer);
	}
	printf("����һ��������%d��\n", count);
	
	return 0;
}