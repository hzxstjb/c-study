#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main(void) {

	// c���Կ⺯��stdio.h, stdlib.h, string.h, math.h, windows.h......
	// �ַ�����������
	//strcpy() �ַ�������,����dest:Ŀ���ַ���, ����sourceԴ�ַ���
	char ch1[] = "hello world";
	char ch2[] = "###########################";

	// �����ַ���������\0Ϊ������, ����ֻ��ӡ hello world
	printf("%s\n",strcpy(ch2, ch1));	//��ʱch2������Ϊ"hello world\0###############"

	//strcmp() �ַ����Ƚ�,�����ַ���������ͬ����0, ��ͬ����1;
	//int result = strcmp("hello", "hello");
	//printf("%d\n", result);

	//memset() 
	char arr[10] = { 0 };
	int i = 0;
	memset(arr, 8, 6);	// memset����: Ŀ���ַ�������, ��Ҫ�滻���ַ�, ��Ҫ�滻������
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}