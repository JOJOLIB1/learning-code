//int galaxy = 8848;
// EOF文件结束标志 getchar putchar 输入输出字符的初识
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
//int main()
//{
//	char ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//
//清空输入缓冲区 以达到正常运行代码的目的 否则会被输入函数所读取无法正常进行 争议 第一种类型
//int main()
//{
//	char passward[20] = { 0 };
//	int b = 0;
//	printf("请输入密码");
//	scanf_s("%c",&passward);
//	while ((b = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码y/n\n");
//	int ch = getchar();
//	if ('y' == ch)
//	     printf("确认成功");
//	else
//		printf("跳过确认成功");
//	return 0;
//}
//int main() 引入EOF  第二种  while函数里面想要输入字符在表达式内填写即可
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a > '9' || a< '0')
//			continue;
//		putchar(a);
//	}
//	return 0;
//}
//在一个有序数组中查找具体的某个数字n
//int main()             //括号也很重要
//{
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 8;
//	for (int i = 0;i <= sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了%d\n",i);
//			break;
//		}
//		if (i == sz) //也可以用else
//		{
//			printf("找不到了");
//			break;
//		}
//	}
//	return 0;
//}
//折半查找法/二分查找法的方法 
//int main()
//{
//	int k = 7;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1; //要判断是否为字符串,若是则要用-2 有\0的影响
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}
//计算n的阶乘
//int main()
//{
//	long long  ret = 1;
//	int i = 0;
//	for (i = 1;i<=10 ;i++)
//	{
//		ret = i * ret;                    //关键所在
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//计算一到十的阶乘之和  较为精简 值得推荐
//int main()
//{
//	int sum = 0;
//	long long ret = 1;
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;                  //关键所在
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//int main()  //嵌套手法   要把阶乘嵌套进去 注意ret的初始化
//{
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	int n = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		for (ret=1,i = 1;i <= n;i++)
//		{
//			ret = ret * i;     ert*=i  
//		}
//		sum = sum + ret;      sum +=ert
//	}		
//	printf("%d\n", sum);
//	return 0;
//}
//有趣的打字方法 类似二分查找法
//int main()
//{
//	char arr1[] = "我是嫩爹";
//	char arr2[] = "########";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(2000);
//		left++;
//		right--;
//	}
//	return 0;
//}
//输入密码界面的样板
//int main()           //有问题!!!编译器的锅
//{
//	char password[20] = { 0 };
//	int i = 0;
//	int a = 0;
//	printf("请输入密码");
//	for (i = 0;i < 3;i++)
//	{
//	    scanf_s("%c",password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("请重新输入\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次错误,程序结束\n");
//	}
//	return 0;
//}