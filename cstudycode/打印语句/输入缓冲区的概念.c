#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// 程序1.存在bug:输入密码回车后直接输出取消
	//char password[10] = { 0 };
	//char ret = 0;
	//printf("请输入密码:\n");
	//scanf("%s", password);
	//printf("请确认你的输入(Y/N)?\n");
	//scanf("%c", &ret);
	//// 输出结果为:取消. 因为ret = 10(ascii中回车的值是10)
	//if (ret == 'Y')
	//	printf("确认.\n");
	//else
	//	printf("取消.\n");

	// 程序2.改进后解决了上面的bug,原因是输入缓冲区读取时回车也当作一个字符被读取
	//char password[10] = { 0 };
	//char ret = 0;
	//printf("请输入密码:\n");
	//scanf("%s", password);
	//printf("请确认你的输入(Y/N)?\n");
	//getchar();	// 改进方案,添加getchar();将回车提前读取掉
	//// 如果密码输入中间有个空格是还是存在bug,会直接输出取消.
	//scanf("%c", &ret);
	//// 输出结果为:取消.
	//if (ret == 'Y')
	//	printf("确认.\n");
	//else
	//	printf("取消.\n");

	// 程序3.
	char password[10] = { 0 };
	char ret = 0;
	printf("请输入密码:\n");
	scanf("%s", password);
	printf("请确认你的输入(Y/N)?\n");
	// 完美解决
	while (getchar() != '\n') {
		;
	}
	scanf("%c", &ret);
	if (ret == 'Y')
		printf("确认.\n");
	else
		printf("取消.\n");
	return 0;
}