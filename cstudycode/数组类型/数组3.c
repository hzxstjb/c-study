#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// sizeof(数组名),计算整个数组的大小,sizeof内部放一个数组名,表示整个数组
	// &数组名,取出的是数组的地址,&数组名表示整个数组
	// 除此之外,所有的数组名都表示数组首元素的地址
	int arr[6] = { 1,2,3,4,5,6 };
	printf("%p\n",arr);	// 首元素地址
	printf("%p\n",&arr[0]);	// 首元素地址
	printf("%p\n", &arr);	// 整个数组地址
	/*
	00EFFDC4
	00EFFDC4
	00EFFDC4
	*/

	printf("%p\n", arr+1);	// 首元素地址+1
	printf("%p\n", &arr[0]+1);	// 首元素地址+1
	printf("%p\n", &arr+1);	// 整个数组地址+1
	/*
	003AF9E0-->003AF9E4		// 4 下一个元素地址
	003AF9E0-->003AF9E4		// 4 下一个元素地址
	003AF9E0-->003AF9F8		// 24 跳过整个数组后的下一个地址
	*/

	return 0;
}