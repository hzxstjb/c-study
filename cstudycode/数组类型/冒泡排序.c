#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// ц╟ещеепР
void bubble_sort(int arr[],int size) {
	int flag = 1;
	int i = 0;
	for (i = 0; i < size - 1; i++) {
		int j = 0;
		for (j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1) {
			break;
		}
	}
}
int main(void) {

	int arr[] = { 1,6,2,4,8,9,7,3,5,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,size);
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}