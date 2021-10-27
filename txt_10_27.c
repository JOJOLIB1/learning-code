#include<stido.h>
int main()
{
	int arr[] = { 1,2,3,4,5,7,1,4 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int tmp = arr[0];
	for (i = 0;i < sz;i++)
	{
		if (arr[i] > tmp)
		{
			tmp = arr[i];
		}
	}
	printf("%d", tmp);
	return 0;
}