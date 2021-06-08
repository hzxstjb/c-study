#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int mystrlen(char str[]) {
	char* start = str;	// 定义一个char*指针start,指向第一个地址
	char* end = str;	// 定义一个char*指针end,也执行第一个地址
	while (*end != '\0') {	// 循环解引用字符串中的每个地址,判断是否为'\0'
		end++;
	}
	return end - start;	// end指针地址减start指针地址,结果就是字符串的字符数
}
 int main(int argc, char const *argv[])
 {
	 // 1.字符串长度计算,可以使用变量
	 //int mystrlen(char str[]) {
	 //	int count = 0;
	 //	while (*str != '\0') {
	 //		count++;
	 //		str++;
	 //	}
	 //	return count;
	 //}

	 //	2.字符串长度计算,不得使用变量
	 //int mystrlen(char str[]) {
		// if (*str != '\0') {
		//	 return 1 + mystrlen(str + 1);
		// }
		// else {
		//	 return 0;
		// }
	 //}
 	// 3.字符串字符数统计(用指针的方式)
	 char* str = "hello";
	 int len = mystrlen(str);
	 printf("len = %d\n", len);
 	return 0;
 }