#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//�ж�С�˴洢�ʹ�˴洢�����Ž�
//�����ж����ʵĺ���һ���������ֵ
//int check(void)
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	if (check() == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	char* p = ch;
//	printf("%s\n", ch);
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	const char* p1 = "abcdef";
//	printf("%s\n", p1);
//	printf("%c\n", *p1);
//	return 0;
//}
//ָ������ĳ�ʶ ���������ϲ�����
//int main()
//{
//	int a[] = {1,2,3};
//	int b[] = {4,5,6};
//	int c[] = {7,8,9};
//	int* p[] = { a,b,c };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%d", *(p[i] + j));
//		}
//	}
//	return 0;
//}
//����ָ��ĳ�ʶ
// ��ά������Ԫ�ص�ַΪ��һ��  (�����һά����,���иɵ�)
//˼·:��������ָ��,��������ʱ,�õ�������һά����,�൱�ڵõ���������,�൱�ڵõ�����Ԫ�ص�ַ
//�ٸ��ݹ���֪ʶ�ɽ�
//void print(int a[3][5],int x,int y) //��һ  ���������
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print(int(*p)[5], int x, int y) //ָ�������
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d " , *(*(p+i)+j)); //*(p+i)�൱��������
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(a,3,5);
//	return 0;
//}
//�������ϲ���
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] =&a;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}
//������ָ������
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = a;
//	int i = 0;
//	for (i = 0;i < 9;i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(a + i));
//		printf("%d ", a[i]);
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//����ָ��ĳ�ʶ
//void print(const char*str)
//{
//	printf("%s", str);
//}
//int main()
//{
//	void(*p)(const char*) = print;
//	(*p)("wdnmd");
//	return 0;
//}
//����ָ������ĳ�ʶ
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*arr[])(int, int) = { Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d ", arr[i](2, 3));
//	}
//	return 0;
//}
//����ָ����������ÿ�����ת�Ʊ�
//������
//void menu()
//{
//	printf("######################\n");
//	printf("##1Add          2Sub##\n");
//	printf("##3Mul          4Div##\n");
//	printf("########0exit#########\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		menu();
//		printf("���������ѡ��\n");
//		scanf_s("%d", &input);
//		int(*arr[])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input == 0)
//		{
//			printf("�˳��ɹ�\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������������\n");
//			scanf_s("%d%d", &x, &y);
//			printf("����Ϊ%d\n", arr[input](x, y));
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	} while (input);
//	return 0;
//}
//�ص������ĳ�ʶ      //����תվ����
//void ch(const char*str)
//{
//	printf("%s ", str);
//}
//void text(void(*p)(const char*))
//{
//	printf("ch\n");
//	p("bit");
//}
//int main()
//{
//	text(ch);
//	return 0;
//}
//����;ʵ��qsort�ĺ���(int float �ͽṹ������ַ�������  �Ƚ�)
// ����ֵ�Ľ�����Ҫд��
//int cmp_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//int main()
//{
//	int a[] = { 6,7,8,9,1,2,3,4,5,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_int);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//int cmp_float(const void* e1,const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
// ע�������ʱ���ŵĺ���Ӧ��
//int main()
//{
//	float a[] = { 7.0 , 6.0 , 5.0 , 4.0 , 3.0 , 2.0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_float);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%f ", a[i]);
//	}
//	return 0;
//}
// ��д�ṹ��ʱע������ʼ����ֵ,�жϽṹ���Ա�Ƿ���ȷ,������ȳ�Ա
// ����ǿ������ת��Ϊ�ṹ��ʱ,ע�����ŵĺ�������,������->������
// ��������.������
// strcmp������
// ��ǰ�ߴ��ں��߷���>0 ��qsort�Ľ�����������
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//int cmp_struct_name(const void* e1 ,const void* e2)
//{
//	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
//}
//int main()
//{
//	Stu a[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_struct_name);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%s ", a[i].name);
//	}
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//int cmp_struct_age(const void* e1, const void* e2)
//{
//	return  ((Stu*)e1)->age - ((Stu*)e2)->age;
//            
//}
//int main()
//{
//	Stu a[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_struct_age);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", a[i].age);
//	}
//	return 0;
//}
//buble_sort��ͨ�û�ʵ��(qsort����ʵ��)(�лص�����)
//ʵ��˼·
//1*base������ȷ�������Ŀ�ʼ�ص�
//2sz����ȷ�������ʹ���
//3����ָ�����ڵ��ú�������תվ����(�ص�����)
//4�жϲ���:ͨ��ǿ������ת�����Ա���void*���ܽ����õı׶�,����ͨ��ת����char*��width�Ľ��
//����Ч���ҳ����ָ�����һ��Ԫ��(�൱������ҵ��˲���)
//5��������:���жϲ��ֵ�Ԫ�ؿ���,�ټ���width,����Ч֪���ý������ٴ�(�ֽ�δ֪,charֻ�ܽ���һ���ֽ�)
//ע��:�����÷��ŵ�����(��һ���жϻ���ѭ�����ǽ���ȥʱ,���ʽ������)
//void swap(char* buf1,char*buf2,int width)
//{
//	for (int i = 0;i < width;i++)
//	{
//		char  tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void bubble_sort(void*base,int sz,int width,int(*p)(const void*e1,const void*e2))
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		for(int j=0;j<sz-1-i;j++)
//		{
//			if (p((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void test1()
//{
//	int a[] = { 11,3,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	bubble_sort(a,sz,sizeof(a[0]),cmp_int);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
//