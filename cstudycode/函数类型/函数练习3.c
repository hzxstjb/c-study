#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// ����ʵ�ֶ��ֲ���

// ���Ӳ���size
int binary_seach(int arr[], int targer,int size) {	// ����arr�����ǽ����˴�ַ����,����sizeof(arr) / sizeof(int),��32λƽ̨ʼ��Ϊ1;

	int left = 0;
	/*int right = sizeof(arr) / sizeof(arr[0]) - 1;*/
	int right = size - 1;

	int center = 0;
	while (left <= right) {	// ��߽�ʼ��С�ڵ����ұ߽�
		center = (left + right) / 2;
		if (arr[center] > targer) {
			right = center - 1;
		}
		else if (arr[center] < targer) {
			left = center + 1;
		}
		else {
			return center;
		}
	}
	//if (left > right) {	// ����߽�����ұ߽�,��ʾû���ҵ�
	//	return -1;	// ����-1 ��ʾû���ҵ�Ŀ��ֵ
	//}
	return -1;

}

int main(void) {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int targer = 8;
	int idx = 0;
	idx = binary_seach(arr, targer,size);
	printf("Ŀ��ֵ%d��������%d\n", targer, idx);
	return 0;
}