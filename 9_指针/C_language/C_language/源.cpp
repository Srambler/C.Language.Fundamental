#include<stdio.h>
#include <time.h>
void getSeconds(unsigned long *par)
{
	/* 获取当前的秒数 */
	*par = time(NULL);
	return;
}
int main(void)
{
	//每个变量都存在地址
	int  var1;
	char var2[10];
	printf("var1 变量的地址： %p\n", &var1);
	printf("var2 变量的地址： %p\n", &var2);

	//指针用法
	int  var = 20;   /* 实际变量的声明 */
	int  *ip;        /* 指针变量的声明 */
	ip = &var;  /* 在指针变量中存储 var 的地址 */
	printf("Address of var variable: %p\n", &var);
	/* 在指针变量中存储的地址 */
	printf("Address stored in ip variable: %p\n", ip);
	/* 使用指针访问值 */
	printf("Value of *ip variable: %d\n", *ip);

	//空指针
	int  *ptr = NULL;
	printf("ptr 的地址是 %p\n", ptr);

	//指针递增
	int  varr[] = { 10, 100, 200 };
	int  i, *pptr;
	/* 指针中的数组地址 */
	pptr = varr;
	for (i = 0; i < 3; i++)
	{
		printf("存储地址：var[%d] = %x\n", i, pptr);
		printf("存储值：var[%d] = %d\n", i, *pptr);
		/* 移动到下一个位置 */
		pptr++;
	}

	//指针比较
	int  varrr[] = { 10, 100, 200 };
	int  ii, *ptrrr;
	/* 指针中第一个元素的地址 */
	ptrrr = varrr;
	ii = 0;
	while(ptrrr <= &varrr[3 - 1])
	{
		printf("Address of varrr[%d] = %x\n", ii, ptrrr);
		printf("Value of varrr[%d] = %d\n", ii, *ptrrr);
		/* 指向上一个位置 */
		ptrrr++;
		ii++;
	}

	//指针数组
	int  a[] = { 10, 100, 200 };
	int iii, *p[3];
	for (iii = 0; iii < 3; iii++)
	{
		p[iii] = &a[iii]; /* 赋值为整数的地址 */
		printf("%p\n", p[iii]);
	}
	for (iii = 0; iii < 3; iii++)
	{
		printf("Value of var[%d] = %d\n",iii, *p[iii]);
	}

	//指向指针的指针
	int  aa;
	int  *px;
	int  **ppx;
	aa = 3000;
	/* 获取 var 的地址 */
	px = &aa;
	/* 使用运算符 & 获取 ptr 的地址 */
	ppx = &px;
	/* 使用 pptr 获取值 */
	printf("%p\n", px);
	printf("%p\n", ppx);
	printf("Value of var = %d\n", aa);
	printf("Value available at *ptr = %d\n", *px);
	printf("Value available at **pptr = %d\n", **ppx);

	//传递指针给函数
	unsigned long sec;
	getSeconds(&sec);
	/* 输出实际值 */
	printf("Number of seconds: %ld\n", sec);


	





	getchar();
}
