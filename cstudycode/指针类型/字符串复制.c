#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 版本1
//void my_strcpy(char* des, char* src) {
//	while (*src != '\0') {
//		*des = *src;
//		des++;
//		src++;
//	}
//	*des = *src;
//}

// 版本2
//void my_strcpy(char* des, char* src) {
//	while (*src != '\0') {
//		*des++ = *src++;
//	}
//	*des = *src;
//}

// 版本3
//void my_strcpy(char* des, char* src) {
//	while (*des++ = *src++) {	// 利用字符串'\n'的ASC码为0来实现
//		;
//	}
//}

// 版本4
//void my_strcpy(char* des, char* src) {
//
//	if (des != NULL && src != NULL) {	// 先判断参数是否为空
//		while (*des++ = *src++) {	// 利用字符串'\n'的ASC码为0来实现
//			;
//		}
//	}
//	// 为空的话,不进行操作
//}

// 版本5
#include <assert.h>
void my_strcpy(char* des, char* src) {
	assert(des != NULL);
	assert(src != NULL);
	while (*des++ = *src++) {	// 利用字符串'\n'的ASC码为0来实现
		;
	}
}
 int main(int argc, char const *argv[])
 {
	 char ch1[] = "##########";
	 char ch2[] = "hello";
	 my_strcpy(ch1, ch2);
	 printf("%s\n", ch1);
 	return 0;
 }