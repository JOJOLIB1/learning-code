#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//柔性数组的初识
//struct IF
//{
//	int n;
//	int a[];
//};
//int main()
//{
//	struct IF f;
//	struct IF* p =(struct IF*) malloc(sizeof(struct IF) + 5 * sizeof(int));
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		p->a[i] = i;
//	}
//	struct IF*ptr=(struct IF*)realloc(p, 44);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 5;i < 10;i++)
//	{
//		p->a[i] = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ",p->a[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//文件操作的初识
// 不能在一个fopen里面同时输入输出 除非引用函数
// 典型错例
//int main()
//{
//	FILE*pf=fopen("test.txt", "r+");
//	if (pf == NULL)
//	{
//		printf("%s ", strerror(errno));
//		return 0;
//	}
//	fputc('c',pf);
//	printf("%d ",fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// fputc
//int main()
//{
//	int p=fgetc(stdin);
//	fputc(p,stdout);
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	printf("%c", fgetc(p));
//	fclose(p);
//	p = NULL;
//	return 0;
//}
// fputs
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("i love you\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// fgets
//int main()
//{
//	char a[1024];
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(a, 1024, pf);
//	puts(a);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// fprintf
//int main()
//{
//	char a[] = "i love you!";
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%s\n", a);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}\
// fscanf遇到空格停止
//int main()
//{
//	char a[] = "i love you!";
//	char tmp[20];
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fscanf(pf, "%s", tmp);
//	puts(tmp);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// sprintf把其他内容转化为字符串的内容
//int main()
//{
//	char a[] = "iloveyou";
//	char tmp[20];
//	sprintf(tmp, "%s", a);
//	puts(tmp);
//	return 0;
//}
// sscanf把字符串里面的内容转换为其他如结构体等
//int main()
//{
//	char a[] = "iloveyou";
//	char tmp[20] = { 0 };
//	sscanf(a, "%s", tmp);
//	puts(tmp);
//	return 0;
//}
// fwrite
//int main()
//{
//	char a[] = "iloveyou";
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fwrite(a, sizeof(a[0]),5, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//fread
//int main()
//{
//	char a[10] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fread(a, sizeof(a[0]), 5, pf);
//	puts(a);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//fseek
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fseek(pf, 3, SEEK_SET);
//	int n = fgetc(pf);
//	printf("%c",n);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#define定义的宏#的作用
//#define HE(x) printf("the nume of "#x" is %d\n",x)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	HE(a);
//	HE(b);
//	return 0;
//}
//##的作用
//#define HE(x,y,z) x##y##z
//int main()
//{
//	int abc = 10;
//	printf("%d ",HE(a, b, c));
//	return 0;
//}
//宏对于malloc的简单化]
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(1, int);
//	free(p);
//	p = NULL;
//	return 0;
//}
//条件编译的初识
//int main()
//{
//#if defined (abc)
//	printf("hehe\n");
//#endif
//#if !defined(abc)
//	printf("haha\n");
//#endif
//#ifdef abc
//	printf("heyhey\n");
//#endif
//#ifndef abc
//	printf("hoho\n");
//#endif
//#if 1==1
//	printf("hehe\n");
//#elif 1==2
//	printf("haha\n");
//#else
//	printf("kaka\n");
//#endif
//	return 0;
//}
//避免文件包含的重复的操作
//#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>
#include<errno.h>
//my_strcat的实现 相似于stecpy
//char* my_strcat(char* dest, const char* sce)
//{
//	assert(dest && sce);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *sce++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[30] = "abcdef";
//	char b[] = "ghijkl";
//	printf("%s\n", my_strcat(a, b));
//	return 0;
//}
//strcmp的实现
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);//短路运算
//	while (*str1==*str2)//找不同
//	{
//		if(*str1=='\0' && *str2==*str1)
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char a[] = "abcdef";
//	char b[] = "blmng";
//	printf("%d",my_strcmp(a, b));
//	return 0;
//}
//strncpy的实现
//char* my_strncpy(char* str1, const char* str2, int count)
//{
//	assert(str1&&str2);
//	char* ret = str1;
//	while ((count--)&&(* str1++ = *str2++))//短路运算
//	{
//		;
//	}
//	if (count)
//	{
//		*str1++ = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char a[] = "abcdefghijklmn";
//	char b[] = "hello";
//	printf("%s", my_strncpy(a, b, 7));
//	return 0;
//}
//目标 strncmp strncat strtok的模拟实现
//stencmp的实现
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1=(char*)p1;
//	char* s2=(char*)p2;
//	char* cur = (char*)p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1)&&&(*s2)&&!((*s1 - *s2)))
//		{
//			s1++;
//			s2++;
//			if (!(*s2))
//			{
//				return cur;
//			}
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char* a = "abbcdef";
//	const char* b = "bcde";
//	char* ret = my_strstr(a, b);
//	if (ret!=NULL)
//		printf("找到了%s\n", ret);
//	else
//		printf("找不到\n");
//	return 0;
//}
//strtok 的用法
//int main()
//{
//	char a[] = "i,love,you,you,are,my,life";
//	const char* p = ",";
//	for (char* ret = strtok(a, p);ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s ", ret);
//	}
//	return 0;
//}
//strerror 的使用
//int main()
//{
//	FILE*p=fopen("texe_tse", "r");
//	if (p == NULL)
//	{
//		printf("%s ", strerror(errno));
//	}
//	else
//	{
//		printf("找到了\n");
//	}
//	return 0;
//}
//判断字符和转换字符的初识
//int main()
//{
//	char a[] = "I LVOE YOU";
//	int i = 0;
//	while (a[i])
//	{
//		if (isupper(a[i]))
//		{
//			a[i] = tolower(a[i]);
//		}
//		i++;
//	}
//	printf("%s", a);
//	return 0;
//}
//memcpy的初识
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[5] = { 0 };
//	memcpy(b, a, sizeof(a));
//	int i = 0;
//	while (i<5)
//	{
//		printf("%d ", b[i]);
//		i++;
//	}
//	return 0;
//}
//memcpy的实现
// 强转char*的原因 避免奇数拷贝情况的出现
//void* my_memcpy(void* des, const void* sur, size_t count)
//{
//	void* ret = des;
//	assert(des && sur);
//	while (count--)
//	{
//		*((char*)des) = *((char*)sur);
//		des=(char*)des+1;
//		sur=(char*)sur+1;
//	}
//	return ret;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[5] = { 0 };
//	my_memcpy(b, a, sizeof(a));
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//memmove的实现
//void Print(int a[], size_t count)
//{
//	int i = 0;
//	for (i = 0;i < count;i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	assert(dest && src);
//	void* e1 = dest;
//	void* e2 = src;
//	if (e1 < e2)
//	{
//		while (count --)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else if (e1 > e2)
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return e1;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(a + 2, a + 1, 5 * sizeof(a[0]));
//	int sz = sizeof(a) / sizeof(a[0]);
//	Print(a, sz);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>
#include<errno.h>
//my_strcat的实现 相似于stecpy
//char* my_strcat(char* dest, const char* sce)
//{
//	assert(dest && sce);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *sce++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[30] = "abcdef";
//	char b[] = "ghijkl";
//	printf("%s\n", my_strcat(a, b));
//	return 0;
//}
//strcmp的实现
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);//短路运算
//	while (*str1==*str2)//找不同
//	{
//		if(*str1=='\0' && *str2==*str1)
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char a[] = "abcdef";
//	char b[] = "blmng";
//	printf("%d",my_strcmp(a, b));
//	return 0;
//}
//strncpy的实现
//char* my_strncpy(char* str1, const char* str2, int count)
//{
//	assert(str1&&str2);
//	char* ret = str1;
//	while ((count--)&&(* str1++ = *str2++))//短路运算
//	{
//		;
//	}
//	if (count)
//	{
//		*str1++ = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char a[] = "abcdefghijklmn";
//	char b[] = "hello";
//	printf("%s", my_strncpy(a, b, 7));
//	return 0;
//}
//目标 strncmp strncat strtok的模拟实现
//stencmp的实现
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1=(char*)p1;
//	char* s2=(char*)p2;
//	char* cur = (char*)p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1)&&&(*s2)&&!((*s1 - *s2)))
//		{
//			s1++;
//			s2++;
//			if (!(*s2))
//			{
//				return cur;
//			}
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char* a = "abbcdef";
//	const char* b = "bcde";
//	char* ret = my_strstr(a, b);
//	if (ret!=NULL)
//		printf("找到了%s\n", ret);
//	else
//		printf("找不到\n");
//	return 0;
//}
//strtok 的用法
//int main()
//{
//	char a[] = "i,love,you,you,are,my,life";
//	const char* p = ",";
//	for (char* ret = strtok(a, p);ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s ", ret);
//	}
//	return 0;
//}
//strerror 的使用
//int main()
//{
//	FILE*p=fopen("texe_tse", "r");
//	if (p == NULL)
//	{
//		printf("%s ", strerror(errno));
//	}
//	else
//	{
//		printf("找到了\n");
//	}
//	return 0;
//}
//判断字符和转换字符的初识
//int main()
//{
//	char a[] = "I LVOE YOU";
//	int i = 0;
//	while (a[i])
//	{
//		if (isupper(a[i]))
//		{
//			a[i] = tolower(a[i]);
//		}
//		i++;
//	}
//	printf("%s", a);
//	return 0;
//}
//memcpy的初识
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[5] = { 0 };
//	memcpy(b, a, sizeof(a));
//	int i = 0;
//	while (i<5)
//	{
//		printf("%d ", b[i]);
//		i++;
//	}
//	return 0;
//}
//memcpy的实现
// 强转char*的原因 避免奇数拷贝情况的出现
//void* my_memcpy(void* des, const void* sur, size_t count)
//{
//	void* ret = des;
//	assert(des && sur);
//	while (count--)
//	{
//		*((char*)des) = *((char*)sur);
//		des=(char*)des+1;
//		sur=(char*)sur+1;
//	}
//	return ret;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[5] = { 0 };
//	my_memcpy(b, a, sizeof(a));
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//memmove的实现
//void Print(int a[], size_t count)
//{
//	int i = 0;
//	for (i = 0;i < count;i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	assert(dest && src);
//	void* e1 = dest;
//	void* e2 = src;
//	if (e1 < e2)
//	{
//		while (count --)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else if (e1 > e2)
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return e1;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(a + 2, a + 1, 5 * sizeof(a[0]));
//	int sz = sizeof(a) / sizeof(a[0]);
//	Print(a, sz);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//判断小端存储和大端存储的最优解
//具有判断性质的函数一般借助返回值
//int check(void)
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	if (check() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	char* p = ch;
//	printf("%s\n", ch);
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	const char* p1 = "abcdef";
//	printf("%s\n", p1);
//	printf("%c\n", *p1);
//	return 0;
//}
//指针数组的初识 将多个数组合并管理
//int main()
//{
//	int a[] = {1,2,3};
//	int b[] = {4,5,6};
//	int c[] = {7,8,9};
//	int* p[] = { a,b,c };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%d", *(p[i] + j));
//		}
//	}
//	return 0;
//}
//数组指针的初识
// 二维数组首元素地址为第一行  (想象成一维数组,把列干掉)
//思路:对于数组指针,当解引用时,得到了整个一维数组,相当于得到了数组名,相当于得到了首元素地址
//再根据过往知识可解
//void print(int a[3][5],int x,int y) //法一  数组接收器
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print(int(*p)[5], int x, int y) //指针接收器
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d " , *(*(p+i)+j)); //*(p+i)相当于数组名
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(a,3,5);
//	return 0;
//}
//深化理解以上步骤
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] =&a;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}
//数组与指针的理解
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = a;
//	int i = 0;
//	for (i = 0;i < 9;i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(a + i));
//		printf("%d ", a[i]);
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//函数指针的初识
//void print(const char*str)
//{
//	printf("%s", str);
//}
//int main()
//{
//	void(*p)(const char*) = print;
//	(*p)("wdnmd");
//	return 0;
//}
//函数指针数组的初识
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*arr[])(int, int) = { Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d ", arr[i](2, 3));
//	}
//	return 0;
//}
//函数指针数组的运用可用于转移表
//计算器
//void menu()
//{
//	printf("######################\n");
//	printf("##1Add          2Sub##\n");
//	printf("##3Mul          4Div##\n");
//	printf("########0exit#########\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		menu();
//		printf("请输入你的选择\n");
//		scanf_s("%d", &input);
//		int(*arr[])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input == 0)
//		{
//			printf("退出成功\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数\n");
//			scanf_s("%d%d", &x, &y);
//			printf("得数为%d\n", arr[input](x, y));
//		}
//		else
//		{
//			printf("请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}
//回调函数的初识      //起中转站作用
//void ch(const char*str)
//{
//	printf("%s ", str);
//}
//void text(void(*p)(const char*))
//{
//	printf("ch\n");
//	p("bit");
//}
//int main()
//{
//	text(ch);
//	return 0;
//}
//任务;实现qsort的函数(int float 和结构体里的字符和数字  比较)
// 返回值的解引用要写好
//int cmp_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//int main()
//{
//	int a[] = { 6,7,8,9,1,2,3,4,5,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_int);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//int cmp_float(const void* e1,const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
// 注意解引用时括号的合理应用
//int main()
//{
//	float a[] = { 7.0 , 6.0 , 5.0 , 4.0 , 3.0 , 2.0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_float);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%f ", a[i]);
//	}
//	return 0;
//}
// 书写结构体时注意后面初始化的值,判断结构体成员是否正确,如数组等成员
// 对于强制类型转换为结构体时,注意括号的合理利用,再运用->操作符
// 善于运用.操作符
// strcmp的运用
// 若前者大于后者返回>0 与qsort的交换函数相似
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//int cmp_struct_name(const void* e1 ,const void* e2)
//{
//	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
//}
//int main()
//{
//	Stu a[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_struct_name);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%s ", a[i].name);
//	}
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//int cmp_struct_age(const void* e1, const void* e2)
//{
//	return  ((Stu*)e1)->age - ((Stu*)e2)->age;
//            
//}
//int main()
//{
//	Stu a[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_struct_age);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", a[i].age);
//	}
//	return 0;
//}
//buble_sort的通用化实现(qsort化的实现)(有回调函数)
//实现思路
//1*base是用于确定交换的开始地点
//2sz用于确定趟数和次数
//3函数指针用于调用函数起中转站作用(回调函数)
//4判断部分:通过强制类型转换可以避免void*不能解引用的弊端,再者通过转换成char*与width的结合
//能有效的找出各种各样下一个元素(相当于灵活找到了步长)
//5交换部分:将判断部分的元素拷贝,再加上width,能有效知道得交换多少次(字节未知,char只能交换一个字节)
//注意:解引用符号的运用(当一个判断或者循环总是进不去时,表达式有问题)
//void swap(char* buf1,char*buf2,int width)
//{
//	for (int i = 0;i < width;i++)
//	{
//		char  tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void bubble_sort(void*base,int sz,int width,int(*p)(const void*e1,const void*e2))
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		for(int j=0;j<sz-1-i;j++)
//		{
//			if (p((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void test1()
//{
//	int a[] = { 11,3,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	bubble_sort(a,sz,sizeof(a[0]),cmp_int);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
