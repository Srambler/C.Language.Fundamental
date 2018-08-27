#include<stdio.h>
#include <stdlib.h> 
int max(int x, int y);
//size_t 是一种数据类型，近似于无符号整型，但容量范围一般大于 int 和 unsigned。这里使用 size_t 是为了保证 arraysize 变量能够有足够大的容量来储存可能大的数组
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void))
{
	for (size_t i = 0; i<arraySize; i++)
		array[i] = getNextValue();
}

// 获取随机值
int getNextRandomValue(void)
{
	return rand();
}
int main(void)
{
	//函数指针
	//函数指针是指向函数的指针变量。
	//函数指针可以像一般函数一样，用于调用函数、传递参数
	/* p 是函数指针 */
	int(*p)(int, int) = &max; // &可以省略 说明函数有地址入口
	int a, b, c, d;
	printf("请输入三个数字:");
	scanf("%d %d %d", &a, &b, &c);
	/* 与直接调用函数等价，d = max(max(a, b), c) */
	d = p(p(a, b), c);
	printf("最大的数字是: %d\n", d);
	
	


	//回调函数
	//函数指针变量可以作为某个函数的参数来使用的，回调函数就是一个通过函数指针调用的函数。
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);
	for (int i = 0; i < 10; i++) {
		printf("%d ", myarray[i]);
	}
	printf("\n");





	getchar();
	getchar();
	getchar();
	getchar();
}
int max(int x, int y)
{
	return x > y ? x : y;
}