#include<stdio.h>

void insertionSort(int arr[], int s);


int main()
{
    int arr[] = {10, 5, 25, 20, 3, 1, 13};
    int s = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, s);

    for(int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void insertionSort(int arr[], int s)
{
    int i, j, key;

    for(i = 0; i < s; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}



