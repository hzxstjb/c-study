#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>
// �����ĸ���:ָ����1������������,���ܱ��κ�������������
//int isPrimer(int n) {
//	int i = 0;
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}

// �Ż�
int isPrimer(int n) {
	int i = 0;
	for (i = 2; i <= sqrt(n); i++) {	//sqrt()��ƽ������,�쵼��math.h��
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main(void) {

	// �ú����ķ�ʽʵ���������ж�

	int num = 0;
	for (num = 100; num <= 200; num++) {
		if (isPrimer(num)==1) {
			printf("%d\n", num);
		}
	}
	return 0;
}