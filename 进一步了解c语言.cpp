#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//比较三个数大小的方法
//int main()
//{
//	int a = 0;  //有问题 scanf_s 连续输入三个数要打上空格
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数比较大小\n");
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (b > a)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (c > a)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//打印三的倍数 一到一百
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0;i < 100;i ++)
//	{
//		sum = i % 3;
//		if (0 == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
// 求最大公约数  根据一真零假非零真从而造成循环的开始和停止 辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d%d", &m, &n);
//	while (m % n)
//	{
//		int r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("最大公约数为%d\n", n);
//	return 0;
//}
//打印1000到2000之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year%400==0))
//		{
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}
//打印1到100的素数 典型错例
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int n = 0;
//		for (n=2;n<i;n++)
//		{
//			if (i % n != 0)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
// 
// 
//int main()   // 试除法
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int n = 0;
//		for (n = 2;n < i;n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (n == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#include<math.h>
//int main()     //优化版本
//{
//	int i = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		int n = 0;
//		for (n = 2;n <= sqrt(i);n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (n >sqrt(i))  //最后有一次n++导致其大于sqrt
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//1到100找出有9的数  模10余9 计算个数的方法 用两个if才能打出两个99
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			n++;
//		}
//		if (i / 10 == 9)
//		{
//			n++;
//		}
//	}
//	printf("%d ", n);
//	return 0;
//}
//求算1-1/2+1/3_1/4-------1/100的数 有阶乘的思想
//int main()
//{
//	double sum = 0.0;
//    int i = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum +=flag* 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//寻找十个数里面的最大值  注意顺序
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,3,4,2,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < 10;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//99乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-2d  ", i, j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//goto语句的初识 不建议使用 bug出现
//int main()
//{
//again:
//	printf("a");
//	goto again;
//	return 0;
//}
//关机程序
//int main()
//{
//	char input[50] = { 0 };
//	system("shutdown -s -t 1209");
//	printf("你的电脑将要关机,请输入我是猪,自动取消");
//adress:
//	scanf_s("%s",input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto adress;
//	return 0;
//}
