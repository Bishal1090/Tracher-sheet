#include<stdio.h>

void bubbleSort(int arr[], int s);
void swaping(int *a, int *b);

int main()
{
    int arr[] = {10, 5, 25, 20, 3, 1, 13};
    int s = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, s);

    for(int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubbleSort(int arr[], int s)
{
    int i, j;

    for(i = 0; i < s-1; i++)
    {
        for(j = 0; j < s-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swaping(&arr[j], &arr[j+1]);
            }
        }
    }
}

void swaping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

