#include<stdio.h>
#include <string.h>
int main(void)
{
	char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	//char greeting[] = "Hello";
	printf("%s\n", greeting);

	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int  len;

	/* ���� str1 �� str3 */
	strcpy(str3, str1);
	printf("strcpy( str3, str1) :  %s\n", str3);

	/* ���� str1 �� str2 */
	strcat(str1, str2);
	printf("strcat( str1, str2):   %s\n", str1);

	/* ���Ӻ�str1 ���ܳ��� */
	len = strlen(str1);
	printf("strlen(str1) :  %d\n", len);

	//strcmp(s1, s2);
	//��� s1 �� s2 ����ͬ�ģ��򷵻� 0����� s1<s2 �򷵻�С�� 0����� s1>s2 �򷵻ش��� 0
	char str4[12] = "c";
	char str5[12] = "b";
	printf("%d\n", strcmp(str4, str5));
	//strchr(s1, ch);
	//����һ��ָ�룬ָ���ַ��� s1 ���ַ� c�ĵ�һ�γ��ֵ�λ��
	char *par;
	char str6[12] = "qwerffwewq";
	par = str6;
	printf("%p\n", par);
	printf("%p\n", strchr(str6, 'f'));
	//strstr(s1, s2);
	//����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ�á�
	char str7[12] = "qwerffwewq";
	char str8[12] = "ff";
	strstr(str7, str8);
	printf("%p\n", strstr(str7, str8));




	getchar();
}
