#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// printf("This is your "bag"?\n"); 报错
	printf("This is your \"bag\"?\n");
	// 转义字符
	/*
	转义字符	    意义					 ASCII码值（十进制）
		\a	  响铃(BEL)						007
		\b	  退格(BS) 				将当前位置移到前一列	008
		\f	  换页(FF)				将当前位置移到下页开头	012
		\n	  换行(LF)				将当前位置移到下一行开头	010
		\r	  回车(CR)				将当前位置移到本行开头	013
		\t	  水平制表(HT)			（跳到下一个TAB位置）	009
		\v	  垂直制表(VT)					011
		\\	  代表一个反斜线字符'\'				092
 	 	 
		\'	  代表一个单引号（撇号）字符			039
		\"	  代表一个双引号字符				034
		\0	  空字符(NULL)					000
		\ddd  1到3位八进制数所代表的任意字符		三位八进制
		\xhh  1到2位十六进制所代表的任意字符		二位十六进制
	*/

	printf("%d",'\x00F');

	return 0;
}