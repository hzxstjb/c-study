#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

 int main(int argc, char const *argv[])
 {
	 int a = 0x11223344;
	 char* pc = &a;
	 int* pi = &a;

	 // ��Ϊ32λϵͳ��ָ��������4���ֽڵ�,�����ܹ��洢�κ��������͵ĵ�ֵַ
	 printf("pc = %p\n", pc);	// 00CFF81C
	 printf("pi = %p\n", pi);	// 00CFF81C
	 // ��ôָ��ָ��������ʲô������?

	 // ����ָ�����͵�����:
	 // 1. ָ�������ʱ�ɲ����ڴ���ֽ���
	 *pc = 0;
	 printf("a = %d\n", a);		// 0x00CFF798 ֵ 00 33 22 11	������1���ֽ�
	 *pi = 0;
	 printf("a = %d\n", a);		// 0x00CFF798 ֵ 00 00 00 00������4���ֽ�
	 
	 printf("---------------------\n");
	 // 2. ָ��������ƶ����ֽ���
	 int b[5] = { 0 };
	 char* pcb = b;
	 int* pib = b;
	 int i = 0;
	 for (i = 0; i < 5; i++) {		//{0,0,0,0,0} �����ܹ�ռ20���ֽ�,ֻ�޸���1*5=ǰ5���ֽ�
		 *(pcb + i) = i;
	 }
	 for (i = 0; i < 5; i++) {
		 printf("%d\n", b[i]);
	 }

	 printf("-------------------\n");
	 for (i = 0; i < 5; i++) {		// �����ܹ�ռ20���ֽ�,�޸���4*5=20���ֽ�
		 *(pib + i) = i;
	 }

	 for (i = 0; i < 5; i++) {
		 printf("%d\n", b[i]);
	 }


 	return 0;
 }