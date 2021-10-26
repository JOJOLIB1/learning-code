#include<stdio.h>
int main()
{
	char arr[] = { 0,2,3,4,51,2,3 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int left = 0;
	while (left + i < right - i)
	{
		if (arr[left + i] == arr[right - i])
		{
			i++;
		}
		else
		{
			break;
		}
	}
	if (i == sz / 2)
	{
		printf("succeed");
	}
	else
	{
		printf("falut");
	}
	return 0;
}