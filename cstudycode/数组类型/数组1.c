#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// ���������ʹ��������[],��ʾһ����ͬ����Ԫ�صļ���,�������� ������[Ԫ�ظ���],����Ԫ�ظ��������ǳ���
	//int arr[10];	//����������͸�ֵ���ֿܷ�;
	//arr = { 0 };

	int arr[10] = { 0 };
	// int n = 10;
	// int arr[n]; // ����, �����Ǳ���

	//const int N = 10;
	//int arr[N];	//����,const ����ĳ�Ϊ������


	// ����Ԫ�صķ���:ͨ���±�ķ�ʽ,������[�±�],�����±��0��ʼ,��Ԫ�ظ���-1;
	arr[2] = 888;	// ����Ԫ�ظ�ֵ, ������[�±�] = ��ֵ;
	printf("%d\n", arr[2]);		//����, ������[�±�];

	// ����ʵ��:

	int ars[10] = { 0 };
	int index = 0;
	for (index = 0; index < 10; index++) {
		ars[index] = index + 1;
	}

	for (index = 0; index < 10; index++) {
		printf("ars[%d] = %d\n", index, ars[index]);
	}

	return 0;
}