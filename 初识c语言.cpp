//#include<stdio.h>
//int PPX(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int c = 0;
//	c = num1 + num2;
//	PPX(num1, num2);
//	printf("c=%d\n", c);
//	return 0;
//}
//int PPX(int a, int b)  �����Ļ��� ����
//{
//	int c = a + b;
//		return c;
//}
//int main()
//{
//	int num1 = 10084;
//    int num2 = 12001;
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 4,6,7,1 };
//	printf("%d\n", arr[3]);
//	return 0;
//}

//#include<stdio.h>��ӡ���� ������ѭ�����
//int main()
//{
//	int arr[4] = { 1,2,3,4,};
//	int i = 0;
//	while(i<4)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;    ��λ������
//	int b = a << 3;
//	printf("%d\n", b);
//	return 0;
//}
//int c(int a, int b , int d)���㳤�������
//{
//	int c = a * b * d;
//	return c;
//}
//int main()
//{
//	int Long = 0;
//	int Width = 0;
//	int Height = 0;
//	int volume = 0;
//	printf("��ӭ�������㳤�����������\n");
//	printf("�����볤:\n");
//	scanf_s("%d", &Long);
//	printf("�������\n:");
//	scanf_s("%d", &Width);
//	printf("�������:\n");
//	scanf_s("%d", &Height);
//	volume = Long * Width * Height;
//	printf("�������Ϊ%d\n", volume);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//    printf("%d\n", !a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int/a));�����С�Ļ�����ʽ
//	int arr[3] = { 1 };
//	printf("%d\n", sizeof(arr));���������С�ķ���
//	int sz = 0;
//	int arr[3] = { 1 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%\d", sz);������������ķ���
	

//	return 0;
//}
//
 #include<string.h>
//int main()   
//{   
//	char ch[] = "ab\a";˫�����ڿ��滻���� �漰ת���ַ��Ķ���
//	printf("%d\n", strlen(ch));
//	return 0;
//}
//#include<stdio.h>��ӡ�ַ�
//#include<string.h>
//int main()
//{
//	char ch[] = { 'a','b' ,'\0'};
//	printf("%s\n", ch);
//	return 0;
//}
//int PPX(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int main()        ��һ
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int f = 0;
//	printf("�Ƚϼӷ�������С\n");
//	printf("����������ֵ;");
//	scanf_s("%d%d", &a,&c);
//	e = a + c;
//    printf("������������ֵ;");
//	scanf_s("%d%d", &b,&d);
//	f = b + d;
//	if (e > f)
//	printf("�ϴ����Ϊ��һ��", e);
//	else
//	printf("�ϴ����Ϊ�ڶ���", f);
//	return 0;
//}
//int MAX(int a, int b) ���� ��������ȷ�÷�
//{
//	if (a > b)
//	return a;
//	else
//	return b;
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n",max);
//	return 0;
//}
//int main()�ȼӼӺ�ʹ��
//{
//	int a = 10;
//	int b = a++;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()��ʹ�ú�Ӽ�
//	{
//	int a = 10;
//	int b = ++a;
//	printf("a=%d b=%d\n",a,b);
//		return 0;
//	}
//int main()ǿ������ת�� ��3.14ת��Ϊ����
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()�ȽϽϴ�ֵ����
//{
//	int a = 100;
//	int b = 200;
//	int max = 0;    int max =(a>b?a:b);
//	max = (a > b ? a : b);
//	printf("�ϴ�ֵΪ%d\n", max);
//	return 0;
//}
//int add(int a, int b)��������ȷ�÷�
//{
//	int c = 0;   int c = a +b
//	c = a + b;
//	return c;
//}
//int main()
//{
//	int d = 0;
//	int num1 = 100;
//	int num2 = 200;   
//	d = add(num1, num2);         int d=add(num1,num2)
//	printf("��Ϊ%d\n", d);
//	return 0;
//}
//int main()�����ض��� ��� ���⺯�������� ���޷�����������
//{
//	typedef unsigned int u_int;
//	u_int a = 100;
//	return 0;
//}
//void������ʶ �� static������ �ӳ��ֲ�������������
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i <= 4)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern��ʹ��
//#define Max 100  define��ʶ������
//int main()
//{
//	int a = Max;
//	printf("a=%d\n", a);
//	return 0;
//}
//#define MAX(A,B) (A>B?A:B)  #define����ĺ� ����
//int main()
//{ 
//	int num1 = 200;
//	int num2 = 300;
//	int max =  MAX(num1,num2);
//	printf("�ϴ�ֵΪ%d\n", max);
//	return 0;
//}
//int main()  ��ӡ��ַ��ָ�����
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}
//int main() ָ��������
//{
//	char ch = 'a';
//	char* a = &ch;
//	printf("ch�ĵ�ַ��%p\n", a);
//	*a = 'q';
//	printf("%c\n", *a);
//	return 0;
//}
//struct human
//{
//	char nature[10];
//	short Birth;
	//short Height;
	//short Weight;
//};
//int main() //�ṹ��ĳ�ʶ�Լ���ָ����->��ʹ�� �Լ������ݵ�ʹ�� strpy����ֵ����ȫ���޷�����
//{
//	struct human b1 = { "δ֪",1/*,1,1 */};
//	b1.Birth = 100;
//	printf("�Ը�Ϊ%s\n",b1.nature );
//	printf("����Ϊ%d\n",b1.Birth );
	//struct human* pb = &b1;
	//printf("�Ը�Ϊ%s\n", pb->nature);
	//printf("����Ϊd\n", pb->Birth);
	//printf("���Ϊ%d\n",b1.Height );
	//printf("����Ϊ%d\n",b1.Weight );
	/*return 0;
}*/