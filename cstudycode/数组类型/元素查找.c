#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	
	// ����һ����������
	int arrs[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arrs) / sizeof(arrs[0]);	// size��ʾ����Ԫ�صĸ���

	int targer = 18;	//��Ҫ���ҵ�Ŀ��ֵ
	int count = 0;	// ����һ������ͳ�Ʋ�������Ĵ���, ԽСЧ��Խ��;
	int i = 0;
	for (i = 0; i < size; i++) {
		count++;
		if (targer == arrs[i]) {	// �ж�ָ������Ԫ���Ƿ����Ŀ��ֵ
			printf("Ŀ��%d����������%d\n",targer,i);
			break;
		}
	}
	if (i >= size) {
		printf("sorry,û���ҵ�%d\n", targer);
	}
	printf("����һ��������%d��\n", count);

	return 0;
}