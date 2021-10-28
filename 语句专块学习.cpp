#include<stdio.h>
//int main()         //if语句的初识
//{ 
//	int i = 0;
//	printf("加入比特,你要好好学习吗\n");
//	printf("1 好好学习\n");
//	printf("2 家里有80套房子\n");
//	printf("3 不学习\n");
//	scanf_s("%d", &i);
//	if (1 == i)
//		printf("好offer");
//	else if (2 == i)
//		printf("呵呵");
//	else
//	{
//		printf("卖红薯\n");
//		printf("家里蹲大学");
//	}
//	return 0;
//}
//判断是否为奇数 且 输出一到一百的奇数 自创
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		i+=1; //i++  两种方法
//		int sum = i % 2;
//		if (1 == sum)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//switch语句的初识
//int main()
//{
//	int day = 0;
//	printf("请输入数字换算星期几\n");
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//	}
//	return 0;
//}
//switch语句的深化
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	  case 1:
//	  case 2:
//	  case 3:
//		    printf("嘿嘿\n");
//		break;
//      case 4:
//      case 5:
//			printf("哈哈\n");
//		break;
//	}
//	return 0;
//}
//switch语句的进一步深化 引入default
//int main()
//{
//	int a = 0;
//	printf("请输入星期几\n");
//	scanf_s("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//		printf("今天工作日哦\n");
//		break;
//	default:
//		printf("你怕是有大病 有这一天吗\n");
//		break;
//	}
//	return 0;
//}
//int main()  //while中的break 的使用
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (6 == i)
//			break;
//		printf("%d\n", i);
//		i += 1;
//	}
//	return 0;
//}
//  while中的continue 的使用
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (6 == i)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//for循环的初识
//int main()
//{
//	for (int i = 1;i <= 10;i += 1)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//for中的break与continue和while作用一致  易混淆点为for 中的continue
//int main()
//{
//	for (int i = 1; i <= 10;i++)
//	{
//		if (6 == i)
//			continue;
//		printf("%d\n", i);
//	}
//		return 0;
//}
//for的变种1
//int main()
//{
//	for (;;)
//	{
//		printf("我在死循环\n");
//	}
//	return 0;
//}
//for的嵌套 10*10
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0;a < 10;a++)
//	{
//		for (b = 0;b < 10;b++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//for省略了初始化的变化   b少了初始化导致第二次进去时b为10判断为假 不可再次打印 故10
//初始化的重要性
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (;a < 10;a++)
//	{
//		for (;b < 10;b++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//for的变种二
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0;x < 5 && y < 3;x++, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//经典例题 判断部分为赋值 且赋值为0  0为假 故不循环
//int main()
//{
//	int a, b;
//	for(a=0,b=0;a=0;a++)
//	{
//		a++;
//	}
//	return 0;
//}
//do while循环的初识
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i += 1;
//	} while (i <= 10);
//	return 0;
//}
//do while 的break continue 作用一致