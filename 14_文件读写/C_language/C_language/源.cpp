//文件读写
//r	打开一个已有的文本文件，允许读取文件。
//w	打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
//a	打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
//r+	打开一个文本文件，允许读写文件。
//w+	打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
//a+	打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。
//如果处理的是二进制文件，则需使用下面的访问模式来取代上面的访问模式：
//"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
#include <stdio.h>
#include <malloc.h>
int main()
{
	FILE *fp = NULL;

	fp = fopen("test.txt", "a+");
	//写入文件
	fprintf(fp, "This is testing for fprintf...\n");
	fclose(fp);
	//函数 fputs() 把字符串 s 的字符值写入到 fp 所指向的输出流中。如果写入成功，它会返回写入的字符，如果发生错误，则会返回 EOF。
	fp = fopen("test.txt", "a+");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
	//函数 fputc() 把参数 c 的字符值写入到 fp 所指向的输出流中。如果写入成功，它会返回写入的字符，如果发生错误，则会返回 EOF。
	fp = fopen("test.txt", "a+");
	fputc('t', fp);
	fclose(fp);

	fp = fopen("test.txt", "r");
	//读取文件
	char buff[255];
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);
	//fgetc() 函数从 fp 所指向的输入文件中读取一个字符。返回值是读取的字符，如果发生错误则返回 EOF
	printf("2: %c\n", fgetc(fp));
	printf("2: %c\n", fgetc(fp));
	//函数 fgets() 从 fp 所指向的输入流中读取 n - 1 个字符。它会把读取的字符串复制到缓冲区 buf，并在最后追加一个 null 字符来终止字符串。
	//如果这个函数在读取最后一个字符之前就遇到一个换行符 '\n' 或文件的末尾 EOF，则只会返回读取到的字符，包括换行符。
	fgets(buff, 105, (FILE*)fp);
	printf("3: %s\n", buff);
	fclose(fp);
	//二进制读写
	//(1)size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
	//　　　其中，ptr：指向保存结果的指针；size：每个数据类型的大小；count：数据的个数；stream：文件指针
	//　　　函数返回读取数据的个数。
	//(2)size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
	//　   其中，ptr：指向保存数据的指针；size：每个数据类型的大小；count：数据的个数；stream：文件指针
	//　　函数返回写入数据的个数。
	//(1)写操作fwrite()后必须关闭流fclose()。
	//(2)不关闭流的情况下，每次读或写数据后，文件指针都会指向下一个待写或者读数据位置的指针
	
	
	//读取
	fp = fopen("test1.txt", "rb");
	int a;
	char  *c_P ;
	//文件指针fp 位置；
	printf("%p\n", fp);
	//文件指针定位到末尾；
	fseek(fp, 0L, SEEK_END);
	//文件指针fp 位置；
	printf("%p\n", fp);
	//文件指针相对于首地址偏移量保存，即是文件大小
	a = ftell(fp);
	printf("%d\n", a);
	//文件指针返回首地址
	fseek(fp, 0, SEEK_SET);
	printf("%d\n", ftell(fp));
	//申请空间
	c_P = (char*)malloc(sizeof(char)*a);
	fread(c_P, sizeof(char), a, fp);
	printf("%s", c_P );
	/*for (int i = 0; i < (a-1); i++)
	{
		printf("%c",* (c_P+i));
	}*/
	free(c_P);
	fclose(fp);


	//写入
	fp = fopen("test3.txt", "wb");
	char buffer[] = {'1','2','3','h','h','j','u'};
	fwrite(buffer,sizeof(char), 7, fp);
	fclose(fp);
	
	//函数名：fseek函数
	//头文件：#include<stdio.h>
	//功能：把与fp有关的文件位置指针放到一个指定位置。
	//格式：  int fseek(FILE *stream, long offset, int fromwhere);
	//范例一：fseek(fp, 0L, SEEK_END);
	//解释：文件指针定位到文件末尾，偏移0个字节
	//范例二：  fseek(fp,50L,0)；或fseek(fp,50L,SEEK_SET);
	//解释：其作用是将位置指针移到离文件头50个字节处。

	

	getchar();
	return 0;
}