#include<stdio.h>
//int main()         //if���ĳ�ʶ
//{ 
//	int i = 0;
//	printf("�������,��Ҫ�ú�ѧϰ��\n");
//	printf("1 �ú�ѧϰ\n");
//	printf("2 ������80�׷���\n");
//	printf("3 ��ѧϰ\n");
//	scanf_s("%d", &i);
//	if (1 == i)
//		printf("��offer");
//	else if (2 == i)
//		printf("�Ǻ�");
//	else
//	{
//		printf("������\n");
//		printf("����״�ѧ");
//	}
//	return 0;
//}
//�ж��Ƿ�Ϊ���� �� ���һ��һ�ٵ����� �Դ�
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		i+=1; //i++  ���ַ���
//		int sum = i % 2;
//		if (1 == sum)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//switch���ĳ�ʶ
//int main()
//{
//	int day = 0;
//	printf("���������ֻ������ڼ�\n");
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//	}
//	return 0;
//}
//switch�����
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	  case 1:
//	  case 2:
//	  case 3:
//		    printf("�ٺ�\n");
//		break;
//      case 4:
//      case 5:
//			printf("����\n");
//		break;
//	}
//	return 0;
//}
//switch���Ľ�һ��� ����default
//int main()
//{
//	int a = 0;
//	printf("���������ڼ�\n");
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
//		printf("���칤����Ŷ\n");
//		break;
//	default:
//		printf("�������д� ����һ����\n");
//		break;
//	}
//	return 0;
//}
//int main()  //while�е�break ��ʹ��
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
//  while�е�continue ��ʹ��
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
//forѭ���ĳ�ʶ
//int main()
//{
//	for (int i = 1;i <= 10;i += 1)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//for�е�break��continue��while����һ��  �׻�����Ϊfor �е�continue
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
//for�ı���1
//int main()
//{
//	for (;;)
//	{
//		printf("������ѭ��\n");
//	}
//	return 0;
//}
//for��Ƕ�� 10*10
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
//forʡ���˳�ʼ���ı仯   b���˳�ʼ�����µڶ��ν�ȥʱbΪ10�ж�Ϊ�� �����ٴδ�ӡ ��10
//��ʼ������Ҫ��
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
//for�ı��ֶ�
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0;x < 5 && y < 3;x++, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//�������� �жϲ���Ϊ��ֵ �Ҹ�ֵΪ0  0Ϊ�� �ʲ�ѭ��
//int main()
//{
//	int a, b;
//	for(a=0,b=0;a=0;a++)
//	{
//		a++;
//	}
//	return 0;
//}
//do whileѭ���ĳ�ʶ
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
//do while ��break continue ����һ��