#include <stdio.h>

/*void reverse(int *arr, int size) 
{
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) 
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
}*/

void reverse (int *arr, int size)
{
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void print(int *arr, int size) 
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main() 
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before reversing: ");
    print(arr, size);

    reverse(arr, size);

    printf("\nArray after reversing: ");
    print(arr, size);
    
    return 0;
}
