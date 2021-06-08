#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

 int main(int argc, char const *argv[])
 {
 	 // 数组遍历
	 // c语言标准,数组元素的指针大小比较时,可以和数组最后一个元素的下一个地址比较,不能和数组第一个
	 // 元素的前一个地址比较
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