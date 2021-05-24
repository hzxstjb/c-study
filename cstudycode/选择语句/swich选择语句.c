#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	//int day = 1;
	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//case 7:
	//	printf("星期日\n");
	//	break;
	//default:
	//	printf("输入有误");
	//	break;
	//}

	// 注意break关键字的使用
	int day = 6;

	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入有误\n");
		break;
	}


	return 0; 
}