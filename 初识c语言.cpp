//#include<stdio.h>
//int PPX(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int c = 0;
//	c = num1 + num2;
//	PPX(num1, num2);
//	printf("c=%d\n", c);
//	return 0;
//}
//int PPX(int a, int b)  函数的基础 错例
//{
//	int c = a + b;
//		return c;
//}
//int main()
//{
//	int num1 = 10084;
//    int num2 = 12001;
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 4,6,7,1 };
//	printf("%d\n", arr[3]);
//	return 0;
//}

//#include<stdio.h>打印数组 运用了循环语句
//int main()
//{
//	int arr[4] = { 1,2,3,4,};
//	int i = 0;
//	while(i<4)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;    移位操作符
//	int b = a << 3;
//	printf("%d\n", b);
//	return 0;
//}
//int c(int a, int b , int d)计算长方体体积
//{
//	int c = a * b * d;
//	return c;
//}
//int main()
//{
//	int Long = 0;
//	int Width = 0;
//	int Height = 0;
//	int volume = 0;
//	printf("欢迎来到计算长方体体积程序\n");
//	printf("请输入长:\n");
//	scanf_s("%d", &Long);
//	printf("请输入宽\n:");
//	scanf_s("%d", &Width);
//	printf("请输入高:\n");
//	scanf_s("%d", &Height);
//	volume = Long * Width * Height;
//	printf("所算体积为%d\n", volume);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//    printf("%d\n", !a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int/a));计算大小的基本格式
//	int arr[3] = { 1 };
//	printf("%d\n", sizeof(arr));计算数组大小的方法
//	int sz = 0;
//	int arr[3] = { 1 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%\d", sz);计算数组个数的方法
	

//	return 0;
//}
//
 #include<string.h>
//int main()   
//{   
//	char ch[] = "ab\a";双引号内可替换内容 涉及转义字符的定义
//	printf("%d\n", strlen(ch));
//	return 0;
//}
//#include<stdio.h>打印字符
//#include<string.h>
//int main()
//{
//	char ch[] = { 'a','b' ,'\0'};
//	printf("%s\n", ch);
//	return 0;
//}
//int PPX(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int main()        法一
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int f = 0;
//	printf("比较加法得数大小\n");
//	printf("请输入两个值;");
//	scanf_s("%d%d", &a,&c);
//	e = a + c;
//    printf("请输入另两个值;");
//	scanf_s("%d%d", &b,&d);
//	f = b + d;
//	if (e > f)
//	printf("较大的数为第一次", e);
//	else
//	printf("较大的数为第二次", f);
//	return 0;
//}
//int MAX(int a, int b) 法二 函数的正确用法
//{
//	if (a > b)
//	return a;
//	else
//	return b;
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n",max);
//	return 0;
//}
//int main()先加加后使用
//{
//	int a = 10;
//	int b = a++;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()先使用后加加
//	{
//	int a = 10;
//	int b = ++a;
//	printf("a=%d b=%d\n",a,b);
//		return 0;
//	}
//int main()强制类型转换 将3.14转换为整型
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()比较较大值法三
//{
//	int a = 100;
//	int b = 200;
//	int max = 0;    int max =(a>b?a:b);
//	max = (a > b ? a : b);
//	printf("较大值为%d\n", max);
//	return 0;
//}
//int add(int a, int b)函数的正确用法
//{
//	int c = 0;   int c = a +b
//	c = a + b;
//	return c;
//}
//int main()
//{
//	int d = 0;
//	int num1 = 100;
//	int num2 = 200;   
//	d = add(num1, num2);         int d=add(num1,num2)
//	printf("和为%d\n", d);
//	return 0;
//}
//int main()类型重定义 简称 给库函数改名字 将无符号数改名字
//{
//	typedef unsigned int u_int;
//	u_int a = 100;
//	return 0;
//}
//void函数初识 与 static的作用 延长局部变量生命周期
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i <= 4)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern的使用
//#define Max 100  define标识符常量
//int main()
//{
//	int a = Max;
//	printf("a=%d\n", a);
//	return 0;
//}
//#define MAX(A,B) (A>B?A:B)  #define定义的宏 法四
//int main()
//{ 
//	int num1 = 200;
//	int num2 = 300;
//	int max =  MAX(num1,num2);
//	printf("较大值为%d\n", max);
//	return 0;
//}
//int main()  打印地址及指针变量
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}
//int main() 指针变量的深化
//{
//	char ch = 'a';
//	char* a = &ch;
//	printf("ch的地址是%p\n", a);
//	*a = 'q';
//	printf("%c\n", *a);
//	return 0;
//}
//struct human
//{
//	char nature[10];
//	short Birth;
	//short Height;
	//short Weight;
//};
//int main() //结构体的初识以及在指针中->的使用 以及改数据的使用 strpy改数值不安全故无法进行
//{
//	struct human b1 = { "未知",1/*,1,1 */};
//	b1.Birth = 100;
//	printf("性格为%s\n",b1.nature );
//	printf("生日为%d\n",b1.Birth );
	//struct human* pb = &b1;
	//printf("性格为%s\n", pb->nature);
	//printf("生日为d\n", pb->Birth);
	//printf("身高为%d\n",b1.Height );
	//printf("体重为%d\n",b1.Weight );
	/*return 0;
}*/