#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<iostream>
#include<math.h>
//用指针解决字符串逆序问题
//void My_search(char*str)
//{
//	assert(str);
//	int sz = strlen(str);
//	char*left = str;
//	char*right =str+sz-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void test(void)
//{
//	char a[256] = { 0 };
//	gets_s(a);
//	My_search(a);
//	printf("%s", a);
//}
//int main()
//{
//	test();
//	return 0;
//}
//计算求和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	scanf_s("%d%d", &a, &n);
//	for (i = 0;i < n;i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//自幂数的实现 1-10000的自幂数
//1算n位
//2算和
//3判断
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0;i < 100000;i++)
//	{
//		//算n位数
//		int sum = 0;//别放外面
//		int n = 1;
//		tmp = i;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//求和
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//判断
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//打印棱形
//分上下打印可防止愣头青
//更加便利
//int main()
//{
//	int line = 0;
//	scanf_s("%d", &line);//line表示上面行数
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0;i < line - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j <= i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j<2*(line-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//喝汽水问题
//1元一瓶 两瓶空的换一瓶
//法一
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//法二 等价思想 两瓶空等于一瓶 一瓶一元 故空0.5元 20元40个空瓶 能喝39次
//调整奇偶数 使奇数都在前面
//高级方法:左边找一个偶数 右边找一个奇数  两个数交换
//培养函数调用的思想
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//void Move(int* arr, int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//	while (left < right)
//	{
//		//左边找偶数
//		while ((left < right) && ((*left) % 2 == 1))
//		{
//			left++;
//		}
//		//右边找奇数
//		while ((left < right) && ((*right) % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Move(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//杨辉三角 重要 二维数组解决
// 每一个里面的数都等于上面和上面的左边的数相加
//扫视一遍叫遍历
//#define m 10
//#define n 10
//int main()
//{
//	int arr[m][n] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			if ((j == 0)||(i==j))
//			{
//				arr[i][j] = 1;
//			}
//			if ((i >= 2) && (j >= 1))
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//			if (j <= i)
//			{
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//猜凶手
//假设值均在if遍历一次 若是真凶手则会打印 里面的表达式 成立为1否则为0
//int main()
//{
//	char killer = 0;
//	for (killer = 'a';killer <= 'd';killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c ", killer);
//		}
//	}
//	return 0;
//}
//猜名次 猜凶手升级版
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c<= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
//						{
//							if (a * b * c * d == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d,e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//字符左旋(旋转字符串)
//法一 暴力求解法
//void left_move(char* a, int k)
//{
//	//1拿出来
//	//2移位
//	//3放回
//	int len = strlen(a);
//	int i = 0;
//	for (i = 0;i < k;i++)
//	{
//		char tmp = *a;
//		int j = 0;
//		for (j = 0;j < len - 1;j++)
//		{
//			*(a + j) = *(a + j + 1);
//		}
//		*(a + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char a[] = "abcdefghijkl";
//	left_move(a, 2);
//	printf("%s", a);
//	return 0;
//}
//法二 三步翻转法
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right=tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* a, int k)
//{
//	assert(a != NULL);
//	int len = strlen(a);
//	assert(k < len);
//	reverse(a,a+k-1);
//	reverse(a+k,a+len-1);
//	reverse(a,a+len-1);
//}
//int main()
//{
//	char a[] = "abcdefghij";
//	left_move(a,2);
//	printf("%s",a);
//	return 0;
//}
//判断一个字符串是否为另一个字符串的旋转体
//暴力求解法(b是否为a)的反转字符串
//int Judge(char* a, char* b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	int i = 0;
//	int len = strlen(a);
//	for (i = 0;i < len;i++)
//	{
//		left_move(a, 1);
//		if (strcmp(a, b) == 0)
//			return 1;
//	}
//	return 2;
//}
//int main()
//{
//	char a[] = "abcdefg";
//	char b[] = "bcdefga";
//	if (Judge(a, b) == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
//追加法
//int is_left_move(char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (strlen(str1) != strlen(str2))
//		return 0;
//	strncat(str1, str1, strlen(str1));
//	if (strstr(str1, str2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	if (is_left_move(arr1, arr2) == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
//杨氏矩阵找数字
//int is_find(int A[3][3], int* x, int* y,int k)
//{
//	int a = 0;
//	int b = *y - 1;
//	while (a < 3 && b >= 0)
//	{
//		if (A[a][b] > k)
//		{
//			b--;
//		}
//		else if (A[a][b] < k)
//		{
//			a++;
//		}
//		else
//		{
//			*x = a;
//			*y = b;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a[3][3] = { { 1,2,3 }, { 4,5,6 }, { 7,8,9 } };
//	int x = 3;
//	int y = 3;
//	int k = 7;
//	int ret = is_find(a, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("找到了 下标为%d %d", x, y);
//	}
//	else
//		printf("找不到");
//	return 0;
//}
