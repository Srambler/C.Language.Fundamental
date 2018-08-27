#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* 要生成和返回随机数的函数 */
int * getRandom()
{
	static int  r[10];
	int i;

	/* 设置种子 */
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; ++i)
	{
		r[i] = rand();
		printf("r[%d] = %d\n", i, r[i]);

	}

	return r;
}
double getAverage(int arr[], int size)
{
	int    i;
	double avg;
	double sum = 0;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	avg = sum / size;

	return avg;
}


int main(void)
{
	/* 一个带有 5 行 2 列的数组 */
	int a[5][2] = { { 0,0 },{ 1,2 },{ 2,4 },{ 3,6 },{ 4,8 } };
	int i, j;

	/* 输出数组中每个元素的值 */
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}


	//传递数组给函数/////////////////////////////////////////////////////////////////////////////////////////
	//如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。同样地，您也可以传递一个多维数组作为形式参数
	//1_形式参数是一个指针
	//2_形式参数是一个已定义大小的数组
	//3_形式参数是一个未定义大小的数组
	/* 带有 5 个元素的整型数组 */
	int balance[5] = { 10, 2, 3, 17, 50 };
	double avg;
	/* 传递一个指向数组的指针作为参数 */
	avg = getAverage(balance, 5);
	/* 输出返回值 */
	printf("平均值是： %f\n ", avg);


	//从函数返回数组/////////////////////////////////////////////////////////////////////////////////////////
	//C 语言不允许返回一个完整的数组作为函数的参数。但是，您可以通过指定不带索引的数组名来返回一个指向数组的指针
	//如果您想要从函数返回一个一维数组，您必须声明一个返回指针的函数
	int *p;
	int k;
	p = getRandom();
	for (k = 0; k < 10;k++)
	{
		printf("*(p + %d) : %d\n", k, *(p +k));
	}

	///指向数组的指针/////////////////////////////////////////////////////////////////////////////////////////
	double balancee[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
	double *pp;
	int l;
	pp = balancee;
	/* 输出数组中每个元素的值 */
	printf("使用指针的数组值\n");
	for (l = 0; l < 5;l++)
	{
		printf("*(pp + %d) : %f\n", l, *(pp +l));
	}

	printf("使用 balance 作为地址的数组值\n");
	for (l= 0; l < 5; l++)
	{
		printf("*(balance + %d) : %f\n", l, *(balancee + l));
	}

	getchar();
}


