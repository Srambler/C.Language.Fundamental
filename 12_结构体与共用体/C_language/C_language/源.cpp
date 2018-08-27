//C 数组允许定义可存储相同类型数据项的变量，结构是 C 编程中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。
#include <stdio.h>
#include <string.h>
//可用typedef简化
struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};
/* 函数声明 */
void printBook(struct Books book);
/* 函数声明 */
void print_Book(struct Books *book);


//公用体
//共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型
//可存储3种类型，但是空间按最大的类型str[20]
union Data
{
	int i;
	float f;
	char  str[20];
};

int main()
{
	//访问结构成员////////////////////////////////////////////////
	struct Books Book1;        /* 声明 Book1，类型为 Books */
	struct Books Book2;        /* 声明 Book2，类型为 Books */
							   /* Book1 详述 */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;
	/* Book2 详述 */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;
	/* 输出 Book1 信息 */
	printf("Book 1 title : %s\n", Book1.title);
	printf("Book 1 author : %s\n", Book1.author);
	printf("Book 1 subject : %s\n", Book1.subject);
	printf("Book 1 book_id : %d\n", Book1.book_id);
	/* 输出 Book2 信息 */
	printf("Book 2 title : %s\n", Book2.title);
	printf("Book 2 author : %s\n", Book2.author);
	printf("Book 2 subject : %s\n", Book2.subject);
	printf("Book 2 book_id : %d\n", Book2.book_id);

	printf("\n");
	//结构作为函数参数////////////////////////////////////////////////
	struct Books Book3;        /* 声明 Book1，类型为 Books */
	struct Books Book4;        /* 声明 Book2，类型为 Books */
	 /* Book1 详述 */
	strcpy(Book3.title, "C Programming");
	strcpy(Book3.author, "Nuha Ali");
	strcpy(Book3.subject, "C Programming Tutorial");
	Book3.book_id = 6495407;
	/* Book2 详述 */
	strcpy(Book4.title, "Telecom Billing");
	strcpy(Book4.author, "Zara Ali");
	strcpy(Book4.subject, "Telecom Billing Tutorial");
	Book4.book_id = 6495700;
	/* 输出 Book1 信息 */
	printBook(Book3);
	/* 输出 Book2 信息 */
	printBook(Book4);

	printf("\n");
	//指向结构的指针////////////////////////////////////////////////
	struct Books Book5;        /* 声明 Book1，类型为 Books */
	struct Books Book6;        /* 声明 Book2，类型为 Books */
							   /* Book1 详述 */
	strcpy(Book5.title, "C Programming");
	strcpy(Book5.author, "Nuha Ali");
	strcpy(Book5.subject, "C Programming Tutorial");
	Book5.book_id = 6495407;
	/* Book2 详述 */
	strcpy(Book6.title, "Telecom Billing");
	strcpy(Book6.author, "Zara Ali");
	strcpy(Book6.subject, "Telecom Billing Tutorial");
	Book6.book_id = 6495700;
	/* 通过传 Book1 的地址来输出 Book1 信息 */
	print_Book(&Book5);
	/* 通过传 Book2 的地址来输出 Book2 信息 */
	print_Book(&Book6);

	printf("\n");
	//位域
	//有些信息在存储时，并不需要占用一个完整的字节，而只需占几个或一个二进制位。
	//一个位域必须存储在同一个字节中，不能跨两个字节。
	struct bs {
		unsigned a : 1;
		unsigned b : 3;
		unsigned c : 4;
	} bit, *pbit;
	bit.a = 1;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
	bit.b = 7;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
	bit.c = 15;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
	printf("%d,%d,%d\n", bit.a, bit.b, bit.c);    /* 以整型量格式输出三个域的内容 */
	pbit = &bit;    /* 把位域变量 bit 的地址送给指针变量 pbit */
	pbit->a = 0;    /* 用指针方式给位域 a 重新赋值，赋为 0 */
	pbit->b &= 3;    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
	pbit->c |= 1;    /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
	printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);    /* 用指针方式输出了这三个域的值 */
	printf("\n");
	
	
	union Data data;
	printf("Memory size occupied by data : %d\n", sizeof(data));

	//访问共用体成员
	//共用体一次只能复制一个数据类型，其他的会损坏
	union Data data1;
	data1.i = 10;
	printf("data.i : %d\n", data1.i);
	printf("data.f : %f\n", data1.f);
	printf("data.str : %s\n", data1.str);
	data1.f = 220.5;
	printf("data.i : %d\n", data1.i);
	printf("data.f : %f\n", data1.f);
	printf("data.str : %s\n", data1.str);
	strcpy(data1.str, "C Programming");
	printf("data.i : %d\n", data1.i);
	printf("data.f : %f\n", data1.f);
	printf("data.str : %s\n", data1.str);



	getchar();
	return 0;
}



void printBook(struct Books book)
{
	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);
}
void print_Book(struct Books *book)
{
	printf("Book title : %s\n", book->title);
	printf("Book author : %s\n", book->author);
	printf("Book subject : %s\n", book->subject);
	printf("Book book_id : %d\n", book->book_id);
}