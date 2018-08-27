//位域和typedef
#include <stdio.h>
#include <string.h>

/* 定义简单的结构 */
struct A
{
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1;

/* 定义位域结构 */
//使用位域下面的结构可以最大使用32位的开关变量，因为int是4字节
//widthValidated : 1表示使用一位存储
struct B
{
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
} status2;

struct C
{
	unsigned int age : 3;
} Age;

//typedef vs #define
//#define 是 C 指令，用于为各种数据类型定义别名，与 typedef 类似，但是它们有以下几点不同：
//typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE
//typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
typedef struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
} Book;

int main()
{
	printf("Memory size occupied by status1 : %d\n", sizeof(status1));
	printf("Memory size occupied by status2 : %d\n", sizeof(status2));
	Age.age = 4;
	printf("Sizeof( Age ) : %d\n", sizeof(Age));
	printf("Age.age : %d\n", Age.age);
	Age.age = 7;
	printf("Age.age : %d\n", Age.age);
	Age.age = 8; // 二进制表示为 1000 有四位，超出
	printf("Age.age : %d\n", Age.age);

	//typedef
	Book book;
	strcpy(book.title, "C 教程");
	strcpy(book.author, "Runoob");
	strcpy(book.subject, "编程语言");
	book.book_id = 12345;
	printf("书标题 : %s\n", book.title);
	printf("书作者 : %s\n", book.author);
	printf("书类目 : %s\n", book.subject);
	printf("书 ID : %d\n", book.book_id);


	getchar();
	return 0;
}