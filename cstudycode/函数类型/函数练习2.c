#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//	���:�ܱ�4����,�����ܱ�100����;�ܱ�400����;
int isLeapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) {
		return 1;
	}
	//return 0;
}

int main(void) {

	// 1970-2021��,����ļ���;
	int year = 0;
	for (year = 1970; year <= 2021; year++) {
		if (isLeapYear(year)==1) {
			printf("%d��������\n", year);
		}
		else {
			printf("%d����ƽ��\n", year);
		}
		
	}
	return 0;
}