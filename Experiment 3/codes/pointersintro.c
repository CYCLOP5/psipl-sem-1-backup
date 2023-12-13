//call by refrence 

#include <stdio.h>
void swap(int* num1,int* num2);
int main()
{
	int a = 5,b=7;
	printf("%d \n",a);
	printf("%d \n",b);
	swap(&a,&b);
	printf("%d \n",a);
	printf("%d \n",b); 	
	return 0;
}	

void swap(int* num1,int* num2)
{
	int temp;
	temp = *num1;
	*num1=*num2;
	*num2=temp;
	printf("%d \n",*num1);
	printf("%d \n",*num2);
	
}


//call by value


/*

#include <stdio.h>
void swap(int num1,int num2);
int main()
{
	int a=5,b=7;
	printf("%d \n",a);
	printf("%d \n",b);
	swap(a,b);
	printf("%d \n",a);
	printf("%d \n",b); 	
	return 0;
}	

void swap(int num1,int num2)
{
	int temp;
	temp = num1;
	num1=num2;
	num2=temp;
	printf("%d \n",num1);
	printf("%d \n",num2);
	
}*/
