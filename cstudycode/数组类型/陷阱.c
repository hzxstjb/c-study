#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 灵异现象 debug和release版本表现不同
 int main(int argc, char const *argv[])
 {
	 // debug版本下,程序死循环?
	 int i = 10;
	 int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	 for (i = 0; i < 13; i++) {
		 printf("hello\n");
		 arr[i] = 0;	// 数组越界访问引起的
		 // 正常数组的10个元素地址: &arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9],
		 // 当越界访问时 &arr[10],&arr[11],&arr[12] 当访问到&arr[12]的时候正好访问的是i的地址空间,此时i又被修改为0,又满足
		 // 了i<13的循环条件,周而复始...... 进入死循环
	 }
 	return 0;
 }