//ͨ��%2 /2�ķ���������������������1�ĸ���
#include<stdio.h>
#define begin 10
//int main()
//{
//	int count = 0;
//	int num = 10;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	printf("%d", count);
//	return 0;
//}
//��λ�������Ͱ�λ�� �� �Ż��汾
//int  main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//��ʶָ������ڼ����ַ��������е�Ӧ��  ��ʶ
//int my_strlen(char* str)
//{
//	char*start = str;
//	char* end = str;
//	while ((*end) != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char ch[] = "iloveyou";
//	int sum = my_strlen(ch);
//	printf("%d\n", sum);
//	return 0;
//}
// ����
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int*p = &a[begin];a < p;)
//	{
//		*--p = 0;
//	}
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", a[i]);
//		count++;
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}