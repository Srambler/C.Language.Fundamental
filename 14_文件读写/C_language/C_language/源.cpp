//�ļ���д
//r	��һ�����е��ı��ļ��������ȡ�ļ���
//w	��һ���ı��ļ�������д���ļ�������ļ������ڣ���ᴴ��һ�����ļ�����������ĳ������ļ��Ŀ�ͷд�����ݡ�����ļ����ڣ���ûᱻ�ض�Ϊ�㳤�ȣ�����д�롣
//a	��һ���ı��ļ�����׷��ģʽд���ļ�������ļ������ڣ���ᴴ��һ�����ļ�����������ĳ���������е��ļ�������׷�����ݡ�
//r+	��һ���ı��ļ��������д�ļ���
//w+	��һ���ı��ļ��������д�ļ�������ļ��Ѵ��ڣ����ļ��ᱻ�ض�Ϊ�㳤�ȣ�����ļ������ڣ���ᴴ��һ�����ļ���
//a+	��һ���ı��ļ��������д�ļ�������ļ������ڣ���ᴴ��һ�����ļ�����ȡ����ļ��Ŀ�ͷ��ʼ��д����ֻ����׷��ģʽ��
//���������Ƕ������ļ�������ʹ������ķ���ģʽ��ȡ������ķ���ģʽ��
//"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
#include <stdio.h>
#include <malloc.h>
int main()
{
	FILE *fp = NULL;

	fp = fopen("test.txt", "a+");
	//д���ļ�
	fprintf(fp, "This is testing for fprintf...\n");
	fclose(fp);
	//���� fputs() ���ַ��� s ���ַ�ֵд�뵽 fp ��ָ���������С����д��ɹ������᷵��д����ַ����������������᷵�� EOF��
	fp = fopen("test.txt", "a+");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
	//���� fputc() �Ѳ��� c ���ַ�ֵд�뵽 fp ��ָ���������С����д��ɹ������᷵��д����ַ����������������᷵�� EOF��
	fp = fopen("test.txt", "a+");
	fputc('t', fp);
	fclose(fp);

	fp = fopen("test.txt", "r");
	//��ȡ�ļ�
	char buff[255];
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);
	//fgetc() ������ fp ��ָ��������ļ��ж�ȡһ���ַ�������ֵ�Ƕ�ȡ���ַ���������������򷵻� EOF
	printf("2: %c\n", fgetc(fp));
	printf("2: %c\n", fgetc(fp));
	//���� fgets() �� fp ��ָ����������ж�ȡ n - 1 ���ַ�������Ѷ�ȡ���ַ������Ƶ������� buf���������׷��һ�� null �ַ�����ֹ�ַ�����
	//�����������ڶ�ȡ���һ���ַ�֮ǰ������һ�����з� '\n' ���ļ���ĩβ EOF����ֻ�᷵�ض�ȡ�����ַ����������з���
	fgets(buff, 105, (FILE*)fp);
	printf("3: %s\n", buff);
	fclose(fp);
	//�����ƶ�д
	//(1)size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
	//���������У�ptr��ָ�򱣴�����ָ�룻size��ÿ���������͵Ĵ�С��count�����ݵĸ�����stream���ļ�ָ��
	//�������������ض�ȡ���ݵĸ�����
	//(2)size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
	//��   ���У�ptr��ָ�򱣴����ݵ�ָ�룻size��ÿ���������͵Ĵ�С��count�����ݵĸ�����stream���ļ�ָ��
	//������������д�����ݵĸ�����
	//(1)д����fwrite()�����ر���fclose()��
	//(2)���ر���������£�ÿ�ζ���д���ݺ��ļ�ָ�붼��ָ����һ����д���߶�����λ�õ�ָ��
	
	
	//��ȡ
	fp = fopen("test1.txt", "rb");
	int a;
	char  *c_P ;
	//�ļ�ָ��fp λ�ã�
	printf("%p\n", fp);
	//�ļ�ָ�붨λ��ĩβ��
	fseek(fp, 0L, SEEK_END);
	//�ļ�ָ��fp λ�ã�
	printf("%p\n", fp);
	//�ļ�ָ��������׵�ַƫ�������棬�����ļ���С
	a = ftell(fp);
	printf("%d\n", a);
	//�ļ�ָ�뷵���׵�ַ
	fseek(fp, 0, SEEK_SET);
	printf("%d\n", ftell(fp));
	//����ռ�
	c_P = (char*)malloc(sizeof(char)*a);
	fread(c_P, sizeof(char), a, fp);
	printf("%s", c_P );
	/*for (int i = 0; i < (a-1); i++)
	{
		printf("%c",* (c_P+i));
	}*/
	free(c_P);
	fclose(fp);


	//д��
	fp = fopen("test3.txt", "wb");
	char buffer[] = {'1','2','3','h','h','j','u'};
	fwrite(buffer,sizeof(char), 7, fp);
	fclose(fp);
	
	//��������fseek����
	//ͷ�ļ���#include<stdio.h>
	//���ܣ�����fp�йص��ļ�λ��ָ��ŵ�һ��ָ��λ�á�
	//��ʽ��  int fseek(FILE *stream, long offset, int fromwhere);
	//����һ��fseek(fp, 0L, SEEK_END);
	//���ͣ��ļ�ָ�붨λ���ļ�ĩβ��ƫ��0���ֽ�
	//��������  fseek(fp,50L,0)����fseek(fp,50L,SEEK_SET);
	//���ͣ��������ǽ�λ��ָ���Ƶ����ļ�ͷ50���ֽڴ���

	

	getchar();
	return 0;
}