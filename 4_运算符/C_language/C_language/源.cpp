#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("Line 1 - c 的值是 %d\n", c);
	c = a - b;
	printf("Line 2 - c 的值是 %d\n", c);
	c = a * b;
	printf("Line 3 - c 的值是 %d\n", c);
	c = a / b;
	printf("Line 4 - c 的值是 %d\n", c);
	c = a % b;
	printf("Line 5 - c 的值是 %d\n", c);
	c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
	printf("Line 6 - c 的值是 %d\n", c);
	c = ++a;  // 加 1后再赋值 ，c 为 23，a 为 23
	printf("Line 6 - c 的值是 %d\n", c);
	c = a--;  // 赋值后再减 1 ，c 为 23 ，a 为 22
	printf("Line 7 - c 的值是 %d\n", c);
	c = --a;  // 减 1后再赋值 ，c 为 21 ，a 为 21
	printf("Line 7 - c 的值是 %d\n", c);


	//位运算
	unsigned int A = 60;    /* 60 = 0011 1100 */
	unsigned int B = 13;    /* 13 = 0000 1101 */
	int C = 0;

	C = A & B;       /* 12 = 0000 1100 */
	printf("Line 1 - C 的值是 %d\n", C);

	C = A | B;       /* 61 = 0011 1101 */
	printf("Line 2 - C 的值是 %d\n", C);

	C = A ^ B;       /* 49 = 0011 0001 */
	printf("Line 3 - C 的值是 %d\n", C);

	C = ~A;          /*-61 = 1100 0011 */
	printf("Line 4 - C 的值是 %d\n", C);

	C = A << 2;     /* 240 = 1111 0000 */
	printf("Line 5 - C 的值是 %d\n", C);

	C = A >> 2;     /* 15 = 0000 1111 */
	printf("Line 6 - C 的值是 %d\n", C);


	//特殊运算符
	int AA = 4;
	short BB;
	double CC;
	int* ptr;

	/* sizeof 运算符实例 */
	printf("Line 1 - 变量 AA 的大小 = %lu\n", sizeof(AA));
	printf("Line 2 - 变量 BB 的大小 = %lu\n", sizeof(BB));
	printf("Line 3 - 变量 CC 的大小 = %lu\n", sizeof(CC));

	/* & 和 * 运算符实例 */
	ptr = &AA;    /* 'ptr' 现在包含 'AA' 的地址 */
	printf("AA 的值是 %d\n", AA);
	printf("*ptr 是 %d\n", *ptr);

	/* 三元运算符实例 */
	AA = 10;
	BB = (AA == 1) ? 20 : 30;
	printf("BB 的值是 %d\n", BB);

	BB = (AA == 10) ? 20 : 30;
	printf("BB 的值是 %d\n", BB);
	getchar();
}
