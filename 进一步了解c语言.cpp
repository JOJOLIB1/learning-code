#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�Ƚ���������С�ķ���
//int main()
//{
//	int a = 0;  //������ scanf_s ��������������Ҫ���Ͽո�
//	int b = 0;
//	int c = 0;
//	printf("�������������Ƚϴ�С\n");
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
//��ӡ���ı��� һ��һ��
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
// �����Լ��  ����һ����ٷ�����Ӷ����ѭ���Ŀ�ʼ��ֹͣ շת�����
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
//	printf("���Լ��Ϊ%d\n", n);
//	return 0;
//}
//��ӡ1000��2000֮�������
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
//��ӡ1��100������ ���ʹ���
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
//int main()   // �Գ���
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
//int main()     //�Ż��汾
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
//		if (n >sqrt(i))  //�����һ��n++���������sqrt
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//1��100�ҳ���9����  ģ10��9 ��������ķ��� ������if���ܴ������99
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
//����1-1/2+1/3_1/4-------1/100���� �н׳˵�˼��
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
//Ѱ��ʮ������������ֵ  ע��˳��
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
//99�˷��ھ���
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
//goto���ĳ�ʶ ������ʹ�� bug����
//int main()
//{
//again:
//	printf("a");
//	goto again;
//	return 0;
//}
//�ػ�����
//int main()
//{
//	char input[50] = { 0 };
//	system("shutdown -s -t 1209");
//	printf("��ĵ��Խ�Ҫ�ػ�,������������,�Զ�ȡ��");
//adress:
//	scanf_s("%s",input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto adress;
//	return 0;
//}
