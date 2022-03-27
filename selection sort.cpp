#include<stdio.h>

void selectionSort(int arr[], int s);
void swaping(int *a, int *b);

int main()
{
    int arr[] = {10, 5, 25, 20, 3, 1, 13};
    int s = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, s);

    for(int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void selectionSort(int arr[], int s)
{
    int i, j, min_indx;

    for(i = 0; i < s-1; i++)
    {
        min_indx = i;

        for(j = i+1; j < s; j++)
        {
            if(arr[j] < arr[min_indx])
            {
                min_indx = j;
                swaping(&arr[min_indx], &arr[i]);
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
