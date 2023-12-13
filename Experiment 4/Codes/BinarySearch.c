#include <stdio.h>

int binary_search(int array[], int size, int ToFind) //Binary search
{
    int lowerbound = 0;
    int higherbound = size - 1;

    while (lowerbound <= higherbound) 
	{
        int midvalue = (lowerbound + higherbound) / 2;

        if (array[midvalue] == ToFind) 
		{
            return midvalue;
        } 
		else if (array[midvalue] < ToFind) 
		{
            lowerbound = midvalue + 1;
        } 
		else 
		{
            higherbound = midvalue - 1;
        }
    }
    return -1;
}

int main() 
{
    int size = 0;
    printf("Enter size:"); //Input size
    scanf("%d", & size);
    int array[size];
    printf("Enter %d elements: ", size); //Get all elements in array
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &array[i]);
    }
    int ToFind=0;
    int i, j, min_index=0;
   	for (i = 0; i < size; i++) //Selection sort since binary search needs a sorted array
   	{
		min_index = i;
		for (j = i+1; j < size; j++)
		{
		    if (array[j] < array[min_index])
		    {
		        min_index = j;
		    }
		}
		int temp=0;  
		temp= array[min_index];
		array[min_index] = array[i];
		array[i] = temp;
    }
    printf("The sorted array is as follows");
    for (int i = 0; i < size; i++) 
    {
        printf("%d\n",array[i]);
    }
    printf("what to find: ");
    scanf("%d", & ToFind);// Input what to find from user
    
    int result = binary_search(array, size, ToFind);
    
    if (result != -1) 
	{
        printf("found  %d\n", result);
    } 
	else 
	{
        printf("not there\n");
    }

    return 0;
}