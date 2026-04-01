#include <stdio.h>
int binarysearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;
    printf("Select the nummber which you want to find the index from the given array(2,4,6,8,10,12,14)\n");
    scanf("%d", &element);
    int index = binarysearch(arr, size, element);
    printf("The Given number %d is at index %d\n",element,index);
    return 0;
}