#include<stdio.h>
int main(void)
{
	printf("char �洢��С:%d\n", sizeof(char));
	printf("short �洢��С:%d\n", sizeof(short));
	printf("unsigned short �洢��С:%d\n", sizeof(unsigned short));
	printf("int �洢��С:%d\n", sizeof(int));
	printf("unsigned int �洢��С:%d\n", sizeof(unsigned int));
	printf("long �洢��С:%d\n", sizeof(long));
	printf("unsigned long �洢��С:%d\n", sizeof(unsigned long));
	printf("float �洢��С:%d\n", sizeof(float));
	printf("double �洢��С:%d\n", sizeof(double));
	printf("long int �洢��С:%d\n", sizeof(long int));
	printf("long long �洢��С:%d\n", sizeof(long long));
	printf("long double �洢��С:%d\n", sizeof(long double));
	getchar();
}
//short��C�������Ƕ���һ�����ͱ��������һ�֡�
//C�������������������ͣ��ֱ�Ϊ short��int �� long��
//int ��Ϊ���ͣ�short ��Ϊ�����ͣ�long ��Ϊ�����͡�