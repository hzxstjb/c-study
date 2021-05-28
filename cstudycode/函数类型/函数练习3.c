#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 函数实现二分查找

// 增加参数size
int binary_seach(int arr[], int targer,int size) {	// 由于arr这里是进行了传址操作,所以sizeof(arr) / sizeof(int),在32位平台始终为1;

	int left = 0;
	/*int right = sizeof(arr) / sizeof(arr[0]) - 1;*/
	int right = size - 1;

	int center = 0;
	while (left <= right) {	// 左边界始终小于等于右边界
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
	//if (left > right) {	// 当左边界大于右边界,表示没有找到
	//	return -1;	// 返回-1 表示没有找到目标值
	//}
	return -1;

}

int main(void) {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int targer = 8;
	int idx = 0;
	idx = binary_seach(arr, targer,size);
	printf("目标值%d的索引是%d\n", targer, idx);
	return 0;
}