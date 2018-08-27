#include<stdio.h>
int main(void)
{
	printf("char 存储大小:%d\n", sizeof(char));
	printf("short 存储大小:%d\n", sizeof(short));
	printf("unsigned short 存储大小:%d\n", sizeof(unsigned short));
	printf("int 存储大小:%d\n", sizeof(int));
	printf("unsigned int 存储大小:%d\n", sizeof(unsigned int));
	printf("long 存储大小:%d\n", sizeof(long));
	printf("unsigned long 存储大小:%d\n", sizeof(unsigned long));
	printf("float 存储大小:%d\n", sizeof(float));
	printf("double 存储大小:%d\n", sizeof(double));
	printf("long int 存储大小:%d\n", sizeof(long int));
	printf("long long 存储大小:%d\n", sizeof(long long));
	printf("long double 存储大小:%d\n", sizeof(long double));
	getchar();
}
//short在C语言中是定义一种整型变量家族的一种。
//C语言中有三种整数类型，分别为 short、int 和 long。
//int 称为整型，short 称为短整型，long 称为长整型。