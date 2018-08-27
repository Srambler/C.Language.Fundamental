//存储类定义 C 程序中变量/函数的范围（可见性）和生命周期。
//auto   register  static  extern
//auto 默认局部变量  register用于需要快速访问的变量
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