#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main(void) {

	// c语言库函数stdio.h, stdlib.h, string.h, math.h, windows.h......
	// 字符串操作函数
	//strcpy() 字符串复制,参数dest:目标字符串, 参数source源字符串
	char ch1[] = "hello world";
	char ch2[] = "###########################";

	// 索引字符串都是以\0为结束符, 所以只打印 hello world
	printf("%s\n",strcpy(ch2, ch1));	//此时ch2的内容为"hello world\0###############"

	//strcmp() 字符串比较,两个字符串内容相同返回0, 不同返回1;
	//int result = strcmp("hello", "hello");
	//printf("%d\n", result);

	//memset() 
	char arr[10] = { 0 };
	int i = 0;
	memset(arr, 8, 6);	// memset参数: 目标字符串数组, 需要替换的字符, 需要替换的数量
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}