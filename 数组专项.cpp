#include<stdio.h>
//��ά����ĳ�ʶ
//int main()
//{
//	int arr[4][5] = { { 0 }, { 1,2,3 }, { 0 }, { 5,6,7,8 } };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 4;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//ð���������ĳ�ʶ  ��һ��������������  ����շת�����˼�� 
// �Ż�����:����ͨ��һ���������������ж����Ƿ���� ��if����
//void bubble_sort(int arr[], int sz)
//{
//	int flag = 1;
//	int j = 0;
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//��Ҫע����жϵ�λ�� ����������for�������ֲ��ɱ����bug
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,5,4,6,7,8,9,4,5,56,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int p = 0;
//	for (p = 0;p < sz;p++)
//	{
//		printf("%d  ", arr[p]);
//	}
//	return 0;
//}
// ���������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//�ı���������е�ĳһλ
//��λ������ �� ��λ��(0)
//int main()
//{
//	int a =41 ;//00000000000000000000000000101000
//	 a|=(1 << 4);//00000000000000000000000000111000
//	 printf("%d\n", a);
//	return 0;
//}
//��λ������ ��λ�� ��λȡ�� �ı�ĳһλ����(1)
//int main()
//{
//	int a = 57;
//	a &= (~(1 << 4));
//	printf("%d", a);
//	return 0;
//}