#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int mystrlen(char str[]) {
	char* start = str;	// ����һ��char*ָ��start,ָ���һ����ַ
	char* end = str;	// ����һ��char*ָ��end,Ҳִ�е�һ����ַ
	while (*end != '\0') {	// ѭ���������ַ����е�ÿ����ַ,�ж��Ƿ�Ϊ'\0'
		end++;
	}
	return end - start;	// endָ���ַ��startָ���ַ,��������ַ������ַ���
}
 int main(int argc, char const *argv[])
 {
	 // 1.�ַ������ȼ���,����ʹ�ñ���
	 //int mystrlen(char str[]) {
	 //	int count = 0;
	 //	while (*str != '\0') {
	 //		count++;
	 //		str++;
	 //	}
	 //	return count;
	 //}

	 //	2.�ַ������ȼ���,����ʹ�ñ���
	 //int mystrlen(char str[]) {
		// if (*str != '\0') {
		//	 return 1 + mystrlen(str + 1);
		// }
		// else {
		//	 return 0;
		// }
	 //}
 	// 3.�ַ����ַ���ͳ��(��ָ��ķ�ʽ)
	 char* str = "hello";
	 int len = mystrlen(str);
	 printf("len = %d\n", len);
 	return 0;
 }