#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
    int i = 0;
    for(i=0;i<sz-1;i++)
    {
        int flag = 1;
        int j = 0;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int tme = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tme;
                flag = 0;
            }
        }
            if(flag == 1)
            {
                break;
            }
    }
}
int main()
{
    int arr[] = {9, 2, 7, 6, 5, 4, 3, 8, 1, 0};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);
    for(i=0;i<sz;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}