#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �������� debug��release�汾���ֲ�ͬ
 int main(int argc, char const *argv[])
 {
	 // debug�汾��,������ѭ��?
	 int i = 10;
	 int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	 for (i = 0; i < 13; i++) {
		 printf("hello\n");
		 arr[i] = 0;	// ����Խ����������
		 // ���������10��Ԫ�ص�ַ: &arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9],
		 // ��Խ�����ʱ &arr[10],&arr[11],&arr[12] �����ʵ�&arr[12]��ʱ�����÷��ʵ���i�ĵ�ַ�ռ�,��ʱi�ֱ��޸�Ϊ0,������
		 // ��i<13��ѭ������,�ܶ���ʼ...... ������ѭ��
	 }
 	return 0;
 }