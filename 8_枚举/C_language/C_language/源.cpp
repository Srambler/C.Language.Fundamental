#include<stdio.h>
enum DAY
{
	MON=1, TUE, WED, THU, FRI, SAT, SUN
};
int main(void)
{
	enum DAY day;
	day = WED;
	printf("%d", day);

	
	enum color { red = 1, green, blue };

	enum  color favorite_color;

	/* ask user to choose color */
	printf("��������ϲ������ɫ: (1. red, 2. green, 3. blue):\n ");
	scanf("%d", &favorite_color);

	/* ������ */
	switch (favorite_color)
	{
	case red:
		printf("��ϲ������ɫ�Ǻ�ɫ\n");
		break;
	case green:
		printf("��ϲ������ɫ����ɫ\n");
		break;
	case blue:
		printf("��ϲ������ɫ����ɫ\n");
		break;
	default:
		printf("��û��ѡ����ϲ������ɫ\n");
	}






	enum day
	{
		saturday,
		sunday,
		monday,
		tuesday,
		wednesday,
		thursday,
		friday
	} workday;

	int a = 1;
	enum day weekend;
	weekend = (enum day) a;  //����ת��
	//weekend = a; //����
	printf("weekend:%d", weekend);



	getchar();
	getchar();
}
