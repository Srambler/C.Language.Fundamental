#include<stdio.h>
#include <stdlib.h> 
int max(int x, int y);
//size_t ��һ���������ͣ��������޷������ͣ���������Χһ����� int �� unsigned������ʹ�� size_t ��Ϊ�˱�֤ arraysize �����ܹ����㹻���������������ܴ������
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void))
{
	for (size_t i = 0; i<arraySize; i++)
		array[i] = getNextValue();
}

// ��ȡ���ֵ
int getNextRandomValue(void)
{
	return rand();
}
int main(void)
{
	//����ָ��
	//����ָ����ָ������ָ�������
	//����ָ�������һ�㺯��һ�������ڵ��ú��������ݲ���
	/* p �Ǻ���ָ�� */
	int(*p)(int, int) = &max; // &����ʡ�� ˵�������е�ַ���
	int a, b, c, d;
	printf("��������������:");
	scanf("%d %d %d", &a, &b, &c);
	/* ��ֱ�ӵ��ú����ȼۣ�d = max(max(a, b), c) */
	d = p(p(a, b), c);
	printf("����������: %d\n", d);
	
	


	//�ص�����
	//����ָ�����������Ϊĳ�������Ĳ�����ʹ�õģ��ص���������һ��ͨ������ָ����õĺ�����
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);
	for (int i = 0; i < 10; i++) {
		printf("%d ", myarray[i]);
	}
	printf("\n");





	getchar();
	getchar();
	getchar();
	getchar();
}
int max(int x, int y)
{
	return x > y ? x : y;
}