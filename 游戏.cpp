//��������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("##�� �� �� �� Ϸ##\n");
//	printf("####1��ʼ����#####\n");
//	printf("####0�˳�����#####\n");
//	printf("##################\n");
//}
//void game()
//{ 
//	int b = 0;
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100+1;
//	printf("�ɰ�\n");
//	while (1)
//	{
//		scanf_s("%d", &guess);
//		while ((b = getchar()) != '\n')
//		{
//			;
//		}
//		if (ret > guess)
//		{
//			printf("��С��\n");
//		}
//		else if (ret < guess)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�ɶ��ˣ�\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("���������ѡ��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			    game();
//			    break;
//		}
//		case 0:
//		{
//			printf("�˳��ɹ�");
//				break;
//		}
//		default:
//		{
//			    printf("���и��󲡣�������������\n");
//				break;
//		}
//		}
//
//	} while (input);
//	return 0;
//}