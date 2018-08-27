#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int num;
	scanf("%d", &num);
	(num % 2 == 0) ? printf("Å¼Êý") : printf("ÆæÊý");
	
	if (num >500)
	{
		printf("%s\n", "500+");
		if (num > 300)
		{
			printf("%s\n", "300-500");
			if (num > 100)
			{
				printf("%s\n", "100-300");
			}
		}
	}
	else if (num < 50)
	{
		printf("%s\n", "-50");
	}
	else
	{
		printf("%s\n", "50-100");
	}
	
	
	//switch
	switch (num)
	{
	case 1 :
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
		break;
	case 4:
		printf("4");
		switch (num)
		{
		case 1:
			printf("1");
			break;
		case 2:
			printf("2");
			break;
		case 3:
			printf("3");
			break;
		default:
			printf("erro");
		}
		break;
	default: 
		printf("erro");
	}

	//for
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}
	//while
	int i = 10;
	while (i)
	{
		printf("%d\n", i);
		i--;
	}
	//do while
	i = 10;
	do
	{
		printf("%d\n", i);
		i--;
	} while (i > 0);


	i = 10;
	do
	{
		if (i == 8)
		{
			i--;
			continue;
		}
		printf("%d\n", i);
		if (i==5) break;
		i--;
	} while (i > 0);

	//LOOP
	i = 1;
	LOOP:for( i ; i <= 10; i++)
	{
		if (i == 5)
		{
			i++;
			goto LOOP;
		}
		printf("%d\n", i);
	}







	getchar();
	getchar();
}
