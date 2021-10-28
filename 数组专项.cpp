#include<stdio.h>
//二维数组的初识
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
//冒泡排序函数的初识  将一个整形数组排序  很像辗转相除的思想 
// 优化方案:可以通过一个变量的数据来判断其是否完成 用if操作
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
//		if (flag == 1)//需要注意此判断的位置 若放在内置for里面会出现不可避免的bug
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
// 数组的深化理解
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
//改变二进制数中的某一位
//移位操作符 和 按位或(0)
//int main()
//{
//	int a =41 ;//00000000000000000000000000101000
//	 a|=(1 << 4);//00000000000000000000000000111000
//	 printf("%d\n", a);
//	return 0;
//}
//移位操作符 按位与 按位取反 改变某一位数字(1)
//int main()
//{
//	int a = 57;
//	a &= (~(1 << 4));
//	printf("%d", a);
//	return 0;
//}