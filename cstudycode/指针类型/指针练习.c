#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

 int main(int argc, char const *argv[])
 {
 	 // �������
	 // c���Ա�׼,����Ԫ�ص�ָ���С�Ƚ�ʱ,���Ժ��������һ��Ԫ�ص���һ����ַ�Ƚ�,���ܺ������һ��
	 // Ԫ�ص�ǰһ����ַ�Ƚ�
	 int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	 int size = sizeof(arr) / sizeof(arr[0]);
	 int* pt = NULL;
	 //for (pt = arr; pt < &arr[10]; pt++) {
		// *pt = 1;
	 //}
	 for (pt = arr; pt < &arr[size]; pt++) {
		 printf("%d\n", *pt);
	 }
 	return 0;
 }