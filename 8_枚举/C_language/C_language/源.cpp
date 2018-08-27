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
	printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue):\n ");
	scanf("%d", &favorite_color);

	/* 输出结果 */
	switch (favorite_color)
	{
	case red:
		printf("你喜欢的颜色是红色\n");
		break;
	case green:
		printf("你喜欢的颜色是绿色\n");
		break;
	case blue:
		printf("你喜欢的颜色是蓝色\n");
		break;
	default:
		printf("你没有选择你喜欢的颜色\n");
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
	weekend = (enum day) a;  //类型转换
	//weekend = a; //错误
	printf("weekend:%d", weekend);



	getchar();
	getchar();
}
