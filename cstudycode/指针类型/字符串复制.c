#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// �汾1
//void my_strcpy(char* des, char* src) {
//	while (*src != '\0') {
//		*des = *src;
//		des++;
//		src++;
//	}
//	*des = *src;
//}

// �汾2
//void my_strcpy(char* des, char* src) {
//	while (*src != '\0') {
//		*des++ = *src++;
//	}
//	*des = *src;
//}

// �汾3
//void my_strcpy(char* des, char* src) {
//	while (*des++ = *src++) {	// �����ַ���'\n'��ASC��Ϊ0��ʵ��
//		;
//	}
//}

// �汾4
//void my_strcpy(char* des, char* src) {
//
//	if (des != NULL && src != NULL) {	// ���жϲ����Ƿ�Ϊ��
//		while (*des++ = *src++) {	// �����ַ���'\n'��ASC��Ϊ0��ʵ��
//			;
//		}
//	}
//	// Ϊ�յĻ�,�����в���
//}

// �汾5
#include <assert.h>
void my_strcpy(char* des, char* src) {
	assert(des != NULL);
	assert(src != NULL);
	while (*des++ = *src++) {	// �����ַ���'\n'��ASC��Ϊ0��ʵ��
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