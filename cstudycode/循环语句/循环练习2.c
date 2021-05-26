#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main(void) {

	// ÅÜÂíµÆÐ§¹û
	// welcome to Hangzhou!
	// ********************

	char ar1[] = "welcome to Hangzhou!";
	char ar2[] = "********************";

	int begin = 0;
	int end = sizeof(ar1) / sizeof(ar1[0]) - 2;

	while (begin <= end) {
		ar2[begin] = ar1[begin];
		ar2[end] = ar1[end];
		printf("%s\n", ar2);
		Sleep(1000);
		system("cls");
		begin++;
		end--;
	}

	return 0;
}