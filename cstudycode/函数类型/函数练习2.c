#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//	年份:能被4整除,但不能被100整除;能被400整除;
int isLeapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) {
		return 1;
	}
	//return 0;
}

int main(void) {

	// 1970-2021年,闰年的计算;
	int year = 0;
	for (year = 1970; year <= 2021; year++) {
		if (isLeapYear(year)==1) {
			printf("%d年是闰年\n", year);
		}
		else {
			printf("%d年是平年\n", year);
		}
		
	}
	return 0;
}