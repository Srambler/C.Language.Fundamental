//�洢�ඨ�� C �����б���/�����ķ�Χ���ɼ��ԣ����������ڡ�
//auto   register  static  extern
//auto Ĭ�Ͼֲ�����  register������Ҫ���ٷ��ʵı���
#include<stdio.h>

static int a;
void PRINT(void);

extern int  ADD(int a, int b);
void main(void)
{
	a = 1;
	PRINT();
	a++;
	printf("%d\n", a);
	int b=9;
	printf("%d\n", ADD(3,b));
	getchar();
}


void PRINT(void)
{
	printf("%d\n", a);
	a++;
	printf("%d\n", a);
}