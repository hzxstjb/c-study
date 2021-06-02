#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void menu() {

	printf("**********************************\n");
	printf("** 1. play game    2. exit game **\n");
	printf("**********************************\n");
}

void game() {
	printf("play game...\n");
}

void start_game() {
	int ipt = 0;
	do
	{
		menu();
		scanf("%d", &ipt);
		switch (ipt)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("reinput\n");
			break;
		}
	} while (ipt);
}
int main(void) {
	
	start_game();

	return 0;
}