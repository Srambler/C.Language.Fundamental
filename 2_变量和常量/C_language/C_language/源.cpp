#include<stdio.h>
// �������� ���Ƕ���
//1��һ������Ҫ�����洢�ռ�ġ����磺int a ��������ʱ����Ѿ������˴洢�ռ䡣
//2����һ���ǲ���Ҫ�����洢�ռ�ģ�ͨ��ʹ��extern�ؼ������������������������� ���磺extern int a ���б��� a �����ڱ���ļ��ж���ġ�
//������extern�ؼ��֣������Ǳ����Ķ��塣
extern int a, b;
extern int c;
extern float f;


//Ԥ������
//��������Ϊ��д��ĸ�Ǳ�̷��
#define PI 3.14
#define R 10
int main()
{
	/* �������� */
	int a, b;
	int c;
	float f;

	/* ��ʼ�� */
	a = 10;
	b = 20;

	c = a + b;
	printf("value of c : %d \n", c);

	f = 70.0 / 3.0;
	printf("value of f : %f \n", f);

	float area;
	area = PI * R*R;
	printf("����� %.2f\n", area);
	

	const int LONG = 10;
	const int WIDTH = 20;
	//WIDTH = 10; ���󣬲��ɸ�������ֵ
	int perimeter;
	perimeter =( LONG + WIDTH) * 2;
	printf("�ܳ��� %d\n", perimeter);


	getchar();
}
