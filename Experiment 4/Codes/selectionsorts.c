#include <stdio.h>
void sort(int arrays[],int size);

int main()
{
	int arrsize;
	printf("Enter size :");
	scanf("%d",&arrsize);
	int arr[arrsize];
	for(int i =0;i<arrsize;i++)
	{
		printf("Enter %d element:",(i+1));
		scanf("%d",&arr[i]);
	}
	sort(arr,arrsize);
}

void sort(int arrays[],int size)
{
	int i, j, min_index=0;
   	for (i = 0; i < size; i++) 
   	{
		min_index = i;
		for (j = i+1; j < size; j++)
		{
		    if (arrays[j] < arrays[min_index])
		    {
		        min_index = j;
		    }
		}
		int temp=0;  
		temp= arrays[min_index];
		arrays[min_index] = arrays[i];
		arrays[i] = temp;
       }
       for(int i =0;i<size;i++)
	{
		printf("\nNew array : %d",arrays[i]); 
	}
}
