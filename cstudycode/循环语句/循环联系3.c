#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main(void) {

	// �ж����������Ƿ���ȷ,�����������
	int count = 0;
	int password[6] = { 0 };

	while (count < 3) {
		printf("����������:\n");
		scanf("%s", password);
		if (strcmp("123456", password) == 0) {	// �ж������ַ����Ƿ���Ȳ���ʹ��"==", ����strcmp()
			printf("������ȷ!\n");
			break;
		}
		else {
			count++;
			printf("�������!����%d�λ���\n",3-count);			
			continue;		
		}
	}
	return 0;
}