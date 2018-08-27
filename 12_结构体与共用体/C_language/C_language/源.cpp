//C ����������ɴ洢��ͬ����������ı������ṹ�� C �������һ���û��Զ���Ŀ��õ��������ͣ����������洢��ͬ���͵������
#include <stdio.h>
#include <string.h>
//����typedef��
struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};
/* �������� */
void printBook(struct Books book);
/* �������� */
void print_Book(struct Books *book);


//������
//��������һ��������������ͣ�����������ͬ���ڴ�λ�ô洢��ͬ����������
//�ɴ洢3�����ͣ����ǿռ䰴��������str[20]
union Data
{
	int i;
	float f;
	char  str[20];
};

int main()
{
	//���ʽṹ��Ա////////////////////////////////////////////////
	struct Books Book1;        /* ���� Book1������Ϊ Books */
	struct Books Book2;        /* ���� Book2������Ϊ Books */
							   /* Book1 ���� */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;
	/* Book2 ���� */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;
	/* ��� Book1 ��Ϣ */
	printf("Book 1 title : %s\n", Book1.title);
	printf("Book 1 author : %s\n", Book1.author);
	printf("Book 1 subject : %s\n", Book1.subject);
	printf("Book 1 book_id : %d\n", Book1.book_id);
	/* ��� Book2 ��Ϣ */
	printf("Book 2 title : %s\n", Book2.title);
	printf("Book 2 author : %s\n", Book2.author);
	printf("Book 2 subject : %s\n", Book2.subject);
	printf("Book 2 book_id : %d\n", Book2.book_id);

	printf("\n");
	//�ṹ��Ϊ��������////////////////////////////////////////////////
	struct Books Book3;        /* ���� Book1������Ϊ Books */
	struct Books Book4;        /* ���� Book2������Ϊ Books */
	 /* Book1 ���� */
	strcpy(Book3.title, "C Programming");
	strcpy(Book3.author, "Nuha Ali");
	strcpy(Book3.subject, "C Programming Tutorial");
	Book3.book_id = 6495407;
	/* Book2 ���� */
	strcpy(Book4.title, "Telecom Billing");
	strcpy(Book4.author, "Zara Ali");
	strcpy(Book4.subject, "Telecom Billing Tutorial");
	Book4.book_id = 6495700;
	/* ��� Book1 ��Ϣ */
	printBook(Book3);
	/* ��� Book2 ��Ϣ */
	printBook(Book4);

	printf("\n");
	//ָ��ṹ��ָ��////////////////////////////////////////////////
	struct Books Book5;        /* ���� Book1������Ϊ Books */
	struct Books Book6;        /* ���� Book2������Ϊ Books */
							   /* Book1 ���� */
	strcpy(Book5.title, "C Programming");
	strcpy(Book5.author, "Nuha Ali");
	strcpy(Book5.subject, "C Programming Tutorial");
	Book5.book_id = 6495407;
	/* Book2 ���� */
	strcpy(Book6.title, "Telecom Billing");
	strcpy(Book6.author, "Zara Ali");
	strcpy(Book6.subject, "Telecom Billing Tutorial");
	Book6.book_id = 6495700;
	/* ͨ���� Book1 �ĵ�ַ����� Book1 ��Ϣ */
	print_Book(&Book5);
	/* ͨ���� Book2 �ĵ�ַ����� Book2 ��Ϣ */
	print_Book(&Book6);

	printf("\n");
	//λ��
	//��Щ��Ϣ�ڴ洢ʱ��������Ҫռ��һ���������ֽڣ���ֻ��ռ������һ��������λ��
	//һ��λ�����洢��ͬһ���ֽ��У����ܿ������ֽڡ�
	struct bs {
		unsigned a : 1;
		unsigned b : 3;
		unsigned c : 4;
	} bit, *pbit;
	bit.a = 1;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
	bit.b = 7;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
	bit.c = 15;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
	printf("%d,%d,%d\n", bit.a, bit.b, bit.c);    /* ����������ʽ�������������� */
	pbit = &bit;    /* ��λ����� bit �ĵ�ַ�͸�ָ����� pbit */
	pbit->a = 0;    /* ��ָ�뷽ʽ��λ�� a ���¸�ֵ����Ϊ 0 */
	pbit->b &= 3;    /* ʹ���˸��ϵ�λ����� "&="���൱�ڣ�pbit->b=pbit->b&3��λ�� b ��ԭ��ֵΪ 7���� 3 ����λ������Ľ��Ϊ 3��111&011=011��ʮ����ֵΪ 3�� */
	pbit->c |= 1;    /* ʹ���˸���λ�����"|="���൱�ڣ�pbit->c=pbit->c|1������Ϊ 15 */
	printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);    /* ��ָ�뷽ʽ��������������ֵ */
	printf("\n");
	
	
	union Data data;
	printf("Memory size occupied by data : %d\n", sizeof(data));

	//���ʹ������Ա
	//������һ��ֻ�ܸ���һ���������ͣ������Ļ���
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