#include<stdio.h>
#include<string.h>
#include<math.h>
//strcpy��ʹ��
//int main()
//{
//	char arr1[] = "WDNMD";
//	char arr2[] = "##########";
//	strcpy_s(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//memset��ʹ��
//int main()
//{
//	char ch[] = "wdnmd";
//	memset(ch, '*', 3);
//	printf("%s\n", ch);
//	return 0;
//}
//дһ�����������������α��������� voidû�з���ֵ �� û�з���ֵ��д������
//����ָ���������ַ��һ��������
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
//ʵ�ε��÷� �����������ʽ���� ��������һ��ȷ����ֵ����ȥ ��ֵ����
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
//	int max = MAX(100 + 1, MAX(50, 120)); //����MAX���� ��ַ����
//	printf("%d", max);
//	return 0;
//}
//�ú����ж�һ�����Ƿ�Ϊ���� ������
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
//��һ�������ж��Ƿ�Ϊ���� ������
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
//�ú���ʵ�ֶ��ֲ��ҷ�  ������   �����ں����ڼ������ �����еĵ�һ��Ϊָ�� 4/4=1
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
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ����±�Ϊ%d", ret);
//	}
//	return 0;
//}
//�ú�����ʹnum��ֵ��1 ������ ע������
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
//������Ƕ�׵��õĳ�ʶ
//void line()
//{
//	printf("Ƕ��Ӵ   ");
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
//��ʽ���ʵļ��� ���͵������
//int main()
//{
//	printf("%d", strlen("abcde"));
//	return 0;
//}
// һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	printf("%d",printf("%d", printf("%d", 43)));
//	return 0;
//}
//�����������Ͷ������ȷ�÷�
//#include"add.h.cpp" 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
//�����ݹ�ĳ�ʶ ����һ���� �ֱ��ӡ����
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
//����������ʱ����,���ַ�������
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
//�ݹ������ ��n�Ľ׳�
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
//�ݹ� 쳲���������д�� ���ʺ� ������̫��
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
//	printf("��%d��쳲�������Ϊ%d", a,sum);
//	return 0;
//}
//��ѭ���ķ�ʽ���쳲������� ��շת����ķ������� ������n--���÷�
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
