#include<stdio.h>
#include<string.h>
#include<math.h>
//strcpy的使用
//int main()
//{
//	char arr1[] = "WDNMD";
//	char arr2[] = "##########";
//	strcpy_s(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//memset的使用
//int main()
//{
//	char ch[] = "wdnmd";
//	memset(ch, '*', 3);
//	printf("%s\n", ch);
//	return 0;
//}
//写一个函数交换两个整形变量的内容 void没有返回值 且 没有返回值的写法如下
//利用指针来解决地址不一样的问题
// void Swap(int *x, int *y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 2;
//	int b = 1;
//    Swap(&a,& b);
//	printf("%d %d",a,b);
//	return 0;
//}
//实参的用法 常量变量表达式函数 但必须有一个确定的值传过去 传值调用
//int MAX(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int max = MAX(100 + 1, MAX(50, 120)); //调用MAX函数 传址调用
//	printf("%d", max);
//	return 0;
//}
//用函数判断一个数是否为素数 更正版
//int is_prime(int a)
//{ 
//	int j = 0;
//	for ( j = 2;j <= sqrt(a); j++)
//	{
//		if (a % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 101;i <= 200;i ++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
//用一个函数判断是否为闰年 更正版
//int is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d  ",year);
//		}
//	}
//	return 0;
//}
//用函数实现二分查找法  更正版   不能在函数内计算个数 函数中的第一个为指针 4/4=1
//int banner_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = banner_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了下标为%d", ret);
//	}
//	return 0;
//}
//用函数来使num的值加1 更正版 注意括号
//void add (int* p)
//{
//	(*p)++;
//
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	add(&num);
//	add(&num);
//	add(&num);
//	printf("%d", num);
//}
//函数的嵌套调用的初识
//void line()
//{
//	printf("嵌套哟   ");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//链式访问的简例 简称偷懒操作
//int main()
//{
//	printf("%d", strlen("abcde"));
//	return 0;
//}
// 一个函数的返回值作为另一个函数的参数
//int main()
//{
//	printf("%d",printf("%d", printf("%d", 43)));
//	return 0;
//}
//函数的声明和定义的正确用法
//#include"add.h.cpp" 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
//函数递归的初识 输入一个数 分别打印数字
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned  int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}
//不允许创建临时变量,求字符串长度
//int is_add(char*a)
//{
//	if ((*a) != '\0')
//	{
//		return 1 + is_add(a + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char ch[] = "iloveyou";
//	int sum = is_add(ch);
//	printf("%d", sum);
//	return 0;
//}
//递归与迭代 求n的阶乘
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int sum = fac(a);
//	printf("sum=%d", sum);
//	return 0;
//}
//递归 斐波那契数的写法 不适合 运算量太大
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int sum = fib(a);
//	printf("第%d个斐波那契数为%d", a,sum);
//	return 0;
//}
//用循环的方式解决斐波那契数 与辗转相除的方法相似 引入了n--的用法
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int sum = fib(a);
//	printf("%d", sum);
//	return 0;
//}
