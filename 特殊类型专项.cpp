//int galaxy = 8848;
// EOF�ļ�������־ getchar putchar ��������ַ��ĳ�ʶ
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
//������뻺���� �Դﵽ�������д����Ŀ�� ����ᱻ���뺯������ȡ�޷��������� ���� ��һ������
//int main()
//{
//	char passward[20] = { 0 };
//	int b = 0;
//	printf("����������");
//	scanf_s("%c",&passward);
//	while ((b = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������y/n\n");
//	int ch = getchar();
//	if ('y' == ch)
//	     printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ�ϳɹ�");
//	return 0;
//}
//int main() ����EOF  �ڶ���  while����������Ҫ�����ַ��ڱ��ʽ����д����
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
//��һ�����������в��Ҿ����ĳ������n
//int main()             //����Ҳ����Ҫ
//{
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 8;
//	for (int i = 0;i <= sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ���%d\n",i);
//			break;
//		}
//		if (i == sz) //Ҳ������else
//		{
//			printf("�Ҳ�����");
//			break;
//		}
//	}
//	return 0;
//}
//�۰���ҷ�/���ֲ��ҷ��ķ��� 
//int main()
//{
//	int k = 7;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1; //Ҫ�ж��Ƿ�Ϊ�ַ���,������Ҫ��-2 ��\0��Ӱ��
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
//			printf("�±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û���ҵ�\n");
//	}
//	return 0;
//}
//����n�Ľ׳�
//int main()
//{
//	long long  ret = 1;
//	int i = 0;
//	for (i = 1;i<=10 ;i++)
//	{
//		ret = i * ret;                    //�ؼ�����
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//����һ��ʮ�Ľ׳�֮��  ��Ϊ���� ֵ���Ƽ�
//int main()
//{
//	int sum = 0;
//	long long ret = 1;
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;                  //�ؼ�����
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//int main()  //Ƕ���ַ�   Ҫ�ѽ׳�Ƕ�׽�ȥ ע��ret�ĳ�ʼ��
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
//��Ȥ�Ĵ��ַ��� ���ƶ��ֲ��ҷ�
//int main()
//{
//	char arr1[] = "�����۵�";
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
//����������������
//int main()           //������!!!�������Ĺ�
//{
//	char password[20] = { 0 };
//	int i = 0;
//	int a = 0;
//	printf("����������");
//	for (i = 0;i < 3;i++)
//	{
//	    scanf_s("%c",password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("���δ���,�������\n");
//	}
//	return 0;
//}