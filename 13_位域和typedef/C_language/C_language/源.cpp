//λ���typedef
#include <stdio.h>
#include <string.h>

/* ����򵥵Ľṹ */
struct A
{
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1;

/* ����λ��ṹ */
//ʹ��λ������Ľṹ�������ʹ��32λ�Ŀ��ر�������Ϊint��4�ֽ�
//widthValidated : 1��ʾʹ��һλ�洢
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
//#define �� C ָ�����Ϊ�����������Ͷ���������� typedef ���ƣ��������������¼��㲻ͬ��
//typedef ������Ϊ���Ͷ���������ƣ�#define ��������Ϊ���Ͷ��������Ҳ��Ϊ��ֵ������������������Զ��� 1 Ϊ ONE
//typedef ���ɱ�����ִ�н��͵ģ�#define �������Ԥ���������д���ġ�
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
	Age.age = 8; // �����Ʊ�ʾΪ 1000 ����λ������
	printf("Age.age : %d\n", Age.age);

	//typedef
	Book book;
	strcpy(book.title, "C �̳�");
	strcpy(book.author, "Runoob");
	strcpy(book.subject, "�������");
	book.book_id = 12345;
	printf("����� : %s\n", book.title);
	printf("������ : %s\n", book.author);
	printf("����Ŀ : %s\n", book.subject);
	printf("�� ID : %d\n", book.book_id);


	getchar();
	return 0;
}