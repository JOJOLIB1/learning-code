//���õ�����������ab��ֵ-------ͨ���Ӽ���
//�漰����������� ���ܽ����ಿ��ɾ��
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//int main() //��һ
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d  ", a, b);
//	a += b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d  ", a, b);
//	return 0;
//}
// ��λ��򽻻��� ����  ��λ�ǵû��ɶ����ƱȽ����
//int main()
//{
//	int a = 30;
//	int b = 10;
//	a^=b;
//    b^=a;
//	a^=b;
//	printf("%d %d", a, b);
//
//	return 0;
//}
//�ҳ���ֻ����һ�ε�����
//ͨ�������ֵķ��� (������ⷨ)
//������Ҫ����ѭ����ԭ��;�൱�ڵ�һ��ɨ��һ��,�ڶ����ҳ���
//int main ()
//{
//	int i = 0;
//	int j = 0;
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		int count = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (1 == count)
//		{
//			printf("�ҵ���%d", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//��λ���Ľ����ɽⷨ
//int main()
//{
//	int a[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 0;i < sz;i++)
//	{
//		ret ^= a[i];
//	}
//	printf("����Ϊ%d", ret);
//	return 0;
//
//}
//�ṹ����ٴ���� struct stuΪ�Լ�����Ľṹ������Է��ö��ֽṹ
//int main()
//{
//	struct abc
//	{
//		int a;
//		char b[10];
//	};
//	struct abc a = { 10,'a' };
//	printf("%d",a.a);
//	struct abc* p = &a;
//	printf("%d", p->a);
//	return 0;
//}
//����������ʶ
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}
//���ַ������� ����
//int add(char* str)
//{
//	char*start = str;
//	char*end = str;
//	while ((*end) != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "iloveyou";
//	int sum = add(arr);
//	printf("%d", sum);
//	return 0;
//}
// ָ��ĳ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;  
//	int*** ppp = &pp;  
//	***ppp = 20;
//	printf("%d", a);
//	return 0;
//}
//ָ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p[10] = { &a,&b,&c };
//	printf("%d", *(p[0]));
//	return 0;
//}
//ð������
//void change(int arr[],int sz)
//{
//	int tmp = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0;i <sz;i++)
//	{
//		int k = 1;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				k = 0;
//			}
//		}
//		if (k == 1)
//		{
//			for (i = 0;i < sz;i++)
//			{
//
//				printf("%d ", arr[i]);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,4,5,2,7,6,8,10,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change(arr,sz);
//	return 0;
//}
//����Ԫ�ص����� ��һ
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	int j = 0;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);
//	return 0;
//}
//����
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	int tmp = 0;
//	for (i = 0;2 * i < sz;i++)
//	{
//		tmp = arr[left+i];
//		arr[left+i] = arr[right-i];
//		arr[right-i] = tmp;
//	}
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);
//	return 0;
//}
//���齻��
//void reserve(int arr1[],int arr2[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//		tmp = arr1[right];
//		arr1[right] = arr2[right];
//		arr2[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	reserve(arr1, arr2, sz);
//	return 0;
//}
//���������������Ķ����Ʊ����,�ж��ٸ�bit��ͬ
//int main()
//{
//	int count = 0;
//	int i = 0;
//	while (i<32)
//	{
//		int m = 7;
//		int n = 8;
//		m >>= i;
//		n >>= i;
//		if ((m&1) != (n&1))
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("%d", count);
//	return 0;
//}
//�ҳ���������һ�ĸ��� ���� n&n-1
//int COUNT(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a &= (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int count = COUNT(a);
//	printf("%d ", count);
//	return 0;
//}
//���������������Ķ����Ʊ����,�ж��ٸ�bit��ͬ �Ż���(��λ������һ��)
//int Differ(int m, int n)
//{
//	int count = 0;
//	int tmp = m & n;
//	while (tmp)
//	{
//		tmp &= (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d%d", &m, &n);
//	int count = Differ(m, n);
//	printf("%d", count);
//}
//��ӡ�������е�����λ��ż��λ ��λ��λ��1����
//void change(int a)
//{
//	int i = 0;
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	change(a);
//	return 0;
//}
//��ָ���ӡ��������
//void print(int* str,int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(str + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//�ú����ķ�����ӡ�˷��ھ��� Ҫ���Զ���
//void aul(int input)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= input;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf_s("%d", &input);
//	aul(input);
//	return 0;
//}
//�õݹ�ķ�ʽʵ���ַ���������
//1�������� 2�����м�  
//���� 1���� 2��\0 3���� 4��
//int my_strlen(char* str)
//{
//	char*beg = str;
//	char*end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - beg;
//}
//void reverse_string(char arr[])
//{
//	char tmp = 0;
//	tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if ((my_strlen(arr + 1)) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//		arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "i love you";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//����һ����ÿλ֮�� ��ģ���ı���
//int DigitSum(unsigned int a)
//{
//	if (a > 9)
//	{
//		return DigitSum(a / 10) + a % 10;
//	}
//	else
//	{
//		return a;
//	}
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf_s("%d", &a);
//	int sum = DigitSum(a);
//	printf("%d", sum);
//	return 0;
//}
//�õݹ�ʵ��n��k�η�  �ص�
//double MUL(int n,int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / (MUL(n, -k)));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * MUL(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n,&k);
//	double mul = MUL(n,k);
//	printf("%lf", mul);
//	return 0;
//}
//�ṹ��ĳ�ʶ
//typedef struct au
//{
//	int f;
//
//}Au;
//struct bu
//{
//	int a;
//	float b;
//	char c;
//	int* pa;
//	char arr[20];
//	Au e;
//};
//int main()
//{
//	struct bu k = { 10,2.0,'a',NULL,"i love you",{1} };
//	printf("%d", k.e.f);
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	scanf_s("%s", &a);
//	printf("%c", a);
//	return 0;
//}
//strcpy������ʵ�� ����ƪ
#include<assert.h>
char* my_strcpy(char* arr1, const char* arr2)
{
	char* ret = arr1;
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "######################";
	char arr2[] = "iloveyou";
	printf("%s",my_strcpy(arr1, arr2));
	return 0;
}