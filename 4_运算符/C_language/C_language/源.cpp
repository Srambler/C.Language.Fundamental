#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("Line 1 - c ��ֵ�� %d\n", c);
	c = a - b;
	printf("Line 2 - c ��ֵ�� %d\n", c);
	c = a * b;
	printf("Line 3 - c ��ֵ�� %d\n", c);
	c = a / b;
	printf("Line 4 - c ��ֵ�� %d\n", c);
	c = a % b;
	printf("Line 5 - c ��ֵ�� %d\n", c);
	c = a++;  // ��ֵ���ټ� 1 ��c Ϊ 21��a Ϊ 22
	printf("Line 6 - c ��ֵ�� %d\n", c);
	c = ++a;  // �� 1���ٸ�ֵ ��c Ϊ 23��a Ϊ 23
	printf("Line 6 - c ��ֵ�� %d\n", c);
	c = a--;  // ��ֵ���ټ� 1 ��c Ϊ 23 ��a Ϊ 22
	printf("Line 7 - c ��ֵ�� %d\n", c);
	c = --a;  // �� 1���ٸ�ֵ ��c Ϊ 21 ��a Ϊ 21
	printf("Line 7 - c ��ֵ�� %d\n", c);


	//λ����
	unsigned int A = 60;    /* 60 = 0011 1100 */
	unsigned int B = 13;    /* 13 = 0000 1101 */
	int C = 0;

	C = A & B;       /* 12 = 0000 1100 */
	printf("Line 1 - C ��ֵ�� %d\n", C);

	C = A | B;       /* 61 = 0011 1101 */
	printf("Line 2 - C ��ֵ�� %d\n", C);

	C = A ^ B;       /* 49 = 0011 0001 */
	printf("Line 3 - C ��ֵ�� %d\n", C);

	C = ~A;          /*-61 = 1100 0011 */
	printf("Line 4 - C ��ֵ�� %d\n", C);

	C = A << 2;     /* 240 = 1111 0000 */
	printf("Line 5 - C ��ֵ�� %d\n", C);

	C = A >> 2;     /* 15 = 0000 1111 */
	printf("Line 6 - C ��ֵ�� %d\n", C);


	//���������
	int AA = 4;
	short BB;
	double CC;
	int* ptr;

	/* sizeof �����ʵ�� */
	printf("Line 1 - ���� AA �Ĵ�С = %lu\n", sizeof(AA));
	printf("Line 2 - ���� BB �Ĵ�С = %lu\n", sizeof(BB));
	printf("Line 3 - ���� CC �Ĵ�С = %lu\n", sizeof(CC));

	/* & �� * �����ʵ�� */
	ptr = &AA;    /* 'ptr' ���ڰ��� 'AA' �ĵ�ַ */
	printf("AA ��ֵ�� %d\n", AA);
	printf("*ptr �� %d\n", *ptr);

	/* ��Ԫ�����ʵ�� */
	AA = 10;
	BB = (AA == 1) ? 20 : 30;
	printf("BB ��ֵ�� %d\n", BB);

	BB = (AA == 10) ? 20 : 30;
	printf("BB ��ֵ�� %d\n", BB);
	getchar();
}
