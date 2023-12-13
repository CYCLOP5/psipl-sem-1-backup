#include <stdio.h>
void display(int arrays[],int size);
int ispresnt(int arrayforpresent[],int arraysize,int whotocheck);
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
	display(arr,arrsize);
	int checksum;
	printf("\nEnter value which u want to check for:");
	scanf("%d",&checksum);
	if (ispresnt(arr,arrsize,checksum)==1)
	{
		printf("\nyes");
	}
	else
	{
		printf("\n nah");
	}
}

void display(int arrays[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arrays[i]);
	}
}

int ispresnt(int arrayforpresent[],int arraysize,int whotocheck)
{
	int flag =0;
	for(int i=0;i<arraysize;i++)
	{
		if (arrayforpresent[i] == whotocheck)
		{
			flag=1;
			return 1;
		}
	
	}
	if(flag == 0)
	{
	return 0;
	}
	
}
