//猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("##猜 数 字 游 戏##\n");
//	printf("####1开始游玩#####\n");
//	printf("####0退出程序#####\n");
//	printf("##################\n");
//}
//void game()
//{ 
//	int b = 0;
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100+1;
//	printf("蒙吧\n");
//	while (1)
//	{
//		scanf_s("%d", &guess);
//		while ((b = getchar()) != '\n')
//		{
//			;
//		}
//		if (ret > guess)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < guess)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("蒙对了！\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请做出你的选择");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			    game();
//			    break;
//		}
//		case 0:
//		{
//			printf("退出成功");
//				break;
//		}
//		default:
//		{
//			    printf("你有个大病，有这个数嘛，重来\n");
//				break;
//		}
//		}
//
//	} while (input);
//	return 0;
//}