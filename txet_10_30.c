#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int my_search(int a[], int sz)
{
    int min = a[0];
    int left = 0;
    int right = sz - 1;
    int mid = 0;
    int i = 0;
    for (i = 0;i < sz;i++)
    {
        while (left <= right)
        {
            mid = (left + right) / 2;
            int MIN = rand() % 8;
            if (a[mid] < MIN)
            {
                left = mid + 1;
            }
            else if (a[mid] > MIN)
            {
                right = mid - 1;
            }
            else
            {
                break;
            }
        }
        if (a[mid] < min)
        {
            min = a[mid];
        }

    }
    return min;
}
int main()
{
    srand((unsigned int)time(NULL));
    int a[] = { 75,100,400.300,100,500,101,400 };
    int sz = sizeof(a) / sizeof(a[0]);
    printf("%d", my_search(a, sz));
    return 0;
}