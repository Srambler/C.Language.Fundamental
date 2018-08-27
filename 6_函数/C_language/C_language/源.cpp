#include<stdio.h>
//引用，形参为指向实参地址的指针，当对形参的指向操作时，就相当于对实参本身进行的操作。
/* 函数定义 */

void ADD_10(int *x, int *y)
{
	*x = *x + 10;
	*y = *y + 10;
}
void swap(int *x, int *y)
{
	ADD_10(x, y);
	int temp;
	temp = *x;    /* 保存地址 x 的值 */
	*x = *y;      /* 把 y 赋值给 x */
	*y = temp;    /* 把 temp 赋值给 y */

	return;
}
int main(void)
{
	//* 局部变量定义 */
	int a = 100;
	int b = 200;

	printf("交换前，a 的值： %d\n", a);
	printf("交换前，b 的值： %d\n", b);

	/* 调用函数来交换值
	* &a 表示指向 a 的指针，即变量 a 的地址
	* &b 表示指向 b 的指针，即变量 b 的地址
	*/
	swap(&a, &b);

	printf("交换后，a 的值： %d\n", a);
	printf("交换后，b 的值： %d\n", b);

	getchar();
}





////传值对原变量无影响
//void swap(int x, int y)
//{
//   int temp;
//
//   temp = x; /* 保存 x 的值 */
//   x = y;    /* 把 y 赋值给 x */
//   y = temp; /* 把 temp 赋值给 y */
//   return;
//}
//int main(void)
//{
//	/* 局部变量定义 */
//	int a = 100;
//	int b = 200;
//
//	printf("交换前，a 的值： %d\n", a);
//	printf("交换前，b 的值： %d\n", b);
//
//	/* 调用函数来交换值 */
//	a,b=swap(a, b);
//
//	printf("交换后，a 的值： %d\n", a);
//	printf("交换后，b 的值： %d\n", b);
//	getchar();
//}
