#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ַ������ȼ���,����ʹ�ñ���
//int mystrlen(char str[]) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}

//	�ַ������ȼ���,����ʹ�ñ���
int mystrlen(char str[]) {
	if (*str != '\0') {
		return 1 + mystrlen(str + 1);
	}
	else {
		return 0;
	}
}

int main(void) {

	char str[] = "hello";
	int len = mystrlen(str);
	printf("%d\n", len);
	return 0;
}