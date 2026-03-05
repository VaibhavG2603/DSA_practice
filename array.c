#include <stdio.h>

int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the value at %d is:\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the value at %d is:%d\n", i, arr[i]);
    }

    return 0;
}