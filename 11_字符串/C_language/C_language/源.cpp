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

	/* 复制 str1 到 str3 */
	strcpy(str3, str1);
	printf("strcpy( str3, str1) :  %s\n", str3);

	/* 连接 str1 和 str2 */
	strcat(str1, str2);
	printf("strcat( str1, str2):   %s\n", str1);

	/* 连接后，str1 的总长度 */
	len = strlen(str1);
	printf("strlen(str1) :  %d\n", len);

	//strcmp(s1, s2);
	//如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0
	char str4[12] = "c";
	char str5[12] = "b";
	printf("%d\n", strcmp(str4, str5));
	//strchr(s1, ch);
	//返回一个指针，指向字符串 s1 中字符 c的第一次出现的位置
	char *par;
	char str6[12] = "qwerffwewq";
	par = str6;
	printf("%p\n", par);
	printf("%p\n", strchr(str6, 'f'));
	//strstr(s1, s2);
	//返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
	char str7[12] = "qwerffwewq";
	char str8[12] = "ff";
	strstr(str7, str8);
	printf("%p\n", strstr(str7, str8));




	getchar();
}
