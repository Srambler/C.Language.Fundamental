#include<stdio.h>
#include <time.h>
void getSeconds(unsigned long *par)
{
	/* ��ȡ��ǰ������ */
	*par = time(NULL);
	return;
}
int main(void)
{
	//ÿ�����������ڵ�ַ
	int  var1;
	char var2[10];
	printf("var1 �����ĵ�ַ�� %p\n", &var1);
	printf("var2 �����ĵ�ַ�� %p\n", &var2);

	//ָ���÷�
	int  var = 20;   /* ʵ�ʱ��������� */
	int  *ip;        /* ָ����������� */
	ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */
	printf("Address of var variable: %p\n", &var);
	/* ��ָ������д洢�ĵ�ַ */
	printf("Address stored in ip variable: %p\n", ip);
	/* ʹ��ָ�����ֵ */
	printf("Value of *ip variable: %d\n", *ip);

	//��ָ��
	int  *ptr = NULL;
	printf("ptr �ĵ�ַ�� %p\n", ptr);

	//ָ�����
	int  varr[] = { 10, 100, 200 };
	int  i, *pptr;
	/* ָ���е������ַ */
	pptr = varr;
	for (i = 0; i < 3; i++)
	{
		printf("�洢��ַ��var[%d] = %x\n", i, pptr);
		printf("�洢ֵ��var[%d] = %d\n", i, *pptr);
		/* �ƶ�����һ��λ�� */
		pptr++;
	}

	//ָ��Ƚ�
	int  varrr[] = { 10, 100, 200 };
	int  ii, *ptrrr;
	/* ָ���е�һ��Ԫ�صĵ�ַ */
	ptrrr = varrr;
	ii = 0;
	while(ptrrr <= &varrr[3 - 1])
	{
		printf("Address of varrr[%d] = %x\n", ii, ptrrr);
		printf("Value of varrr[%d] = %d\n", ii, *ptrrr);
		/* ָ����һ��λ�� */
		ptrrr++;
		ii++;
	}

	//ָ������
	int  a[] = { 10, 100, 200 };
	int iii, *p[3];
	for (iii = 0; iii < 3; iii++)
	{
		p[iii] = &a[iii]; /* ��ֵΪ�����ĵ�ַ */
		printf("%p\n", p[iii]);
	}
	for (iii = 0; iii < 3; iii++)
	{
		printf("Value of var[%d] = %d\n",iii, *p[iii]);
	}

	//ָ��ָ���ָ��
	int  aa;
	int  *px;
	int  **ppx;
	aa = 3000;
	/* ��ȡ var �ĵ�ַ */
	px = &aa;
	/* ʹ������� & ��ȡ ptr �ĵ�ַ */
	ppx = &px;
	/* ʹ�� pptr ��ȡֵ */
	printf("%p\n", px);
	printf("%p\n", ppx);
	printf("Value of var = %d\n", aa);
	printf("Value available at *ptr = %d\n", *px);
	printf("Value available at **pptr = %d\n", **ppx);

	//����ָ�������
	unsigned long sec;
	getSeconds(&sec);
	/* ���ʵ��ֵ */
	printf("Number of seconds: %ld\n", sec);


	





	getchar();
}
