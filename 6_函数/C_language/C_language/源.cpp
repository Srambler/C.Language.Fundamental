#include<stdio.h>
//���ã��β�Ϊָ��ʵ�ε�ַ��ָ�룬�����βε�ָ�����ʱ�����൱�ڶ�ʵ�α�����еĲ�����
/* �������� */

void ADD_10(int *x, int *y)
{
	*x = *x + 10;
	*y = *y + 10;
}
void swap(int *x, int *y)
{
	ADD_10(x, y);
	int temp;
	temp = *x;    /* �����ַ x ��ֵ */
	*x = *y;      /* �� y ��ֵ�� x */
	*y = temp;    /* �� temp ��ֵ�� y */

	return;
}
int main(void)
{
	//* �ֲ��������� */
	int a = 100;
	int b = 200;

	printf("����ǰ��a ��ֵ�� %d\n", a);
	printf("����ǰ��b ��ֵ�� %d\n", b);

	/* ���ú���������ֵ
	* &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ
	* &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ
	*/
	swap(&a, &b);

	printf("������a ��ֵ�� %d\n", a);
	printf("������b ��ֵ�� %d\n", b);

	getchar();
}





////��ֵ��ԭ������Ӱ��
//void swap(int x, int y)
//{
//   int temp;
//
//   temp = x; /* ���� x ��ֵ */
//   x = y;    /* �� y ��ֵ�� x */
//   y = temp; /* �� temp ��ֵ�� y */
//   return;
//}
//int main(void)
//{
//	/* �ֲ��������� */
//	int a = 100;
//	int b = 200;
//
//	printf("����ǰ��a ��ֵ�� %d\n", a);
//	printf("����ǰ��b ��ֵ�� %d\n", b);
//
//	/* ���ú���������ֵ */
//	a,b=swap(a, b);
//
//	printf("������a ��ֵ�� %d\n", a);
//	printf("������b ��ֵ�� %d\n", b);
//	getchar();
//}
