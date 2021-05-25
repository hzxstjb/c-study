#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main(void) {

	// 判断密码输入是否正确,三次输入机会
	int count = 0;
	int password[6] = { 0 };

	while (count < 3) {
		printf("请输入密码:\n");
		scanf("%s", password);
		if (strcmp("123456", password) == 0) {	// 判断两个字符串是否相等不能使用"==", 函数strcmp()
			printf("密码正确!\n");
			break;
		}
		else {
			count++;
			printf("密码错误!还有%d次机会\n",3-count);			
			continue;		
		}
	}
	return 0;
}