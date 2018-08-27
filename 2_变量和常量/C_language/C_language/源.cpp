#include<stdio.h>
// 变量声明 不是定义
//1、一种是需要建立存储空间的。例如：int a 在声明的时候就已经建立了存储空间。
//2、另一种是不需要建立存储空间的，通过使用extern关键字声明变量名而不定义它。 例如：extern int a 其中变量 a 可以在别的文件中定义的。
//除非有extern关键字，否则都是变量的定义。
extern int a, b;
extern int c;
extern float f;


//预处理常量
//常量定义为大写字母是编程风格
#define PI 3.14
#define R 10
int main()
{
	/* 变量定义 */
	int a, b;
	int c;
	float f;

	/* 初始化 */
	a = 10;
	b = 20;

	c = a + b;
	printf("value of c : %d \n", c);

	f = 70.0 / 3.0;
	printf("value of f : %f \n", f);

	float area;
	area = PI * R*R;
	printf("面积： %.2f\n", area);
	

	const int LONG = 10;
	const int WIDTH = 20;
	//WIDTH = 10; 错误，不可给常量赋值
	int perimeter;
	perimeter =( LONG + WIDTH) * 2;
	printf("周长： %d\n", perimeter);


	getchar();
}
