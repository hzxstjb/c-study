#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ջ�ռ�Ĭ���ǴӸߵ��͵��ڴ��ַ��Ԫ���д洢
// �����������˳��ӵ͵��ߴ洢


 int main(int argc, char const *argv[])
 {
	 int a = 10;
	 int arr[5] = { 0 };
	 printf(" &a = %p\n", &a);	//  &a = 00F6FC88 ��:	�ȶ��帳ֵ���ڸߵ�ַ
	 printf("arr = %p\n", arr);	// arr = 00F6FC6C С:	���帳ֵ���ڵ͵�ַ
	 // ������ַ��28: arr 5��intԪ��ռ20���ֽ�, ��a֮���������intԪ�صĿռ�
 	 return 0;
 }