#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 字符串长度计算,可以使用变量
//int mystrlen(char str[]) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}

//	字符串长度计算,不得使用变量
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