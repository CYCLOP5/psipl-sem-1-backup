#include<stdio.h>
int  fib(int n);

int main()
{
    int n;
    printf("Enter till what number u want fibo series : ");
    scanf("%d",&n);

    printf("The Fibonacci numbers are : \n");

    for(int i=1;i<=n;i++)
    {
        printf("%d \t",fib(i));
    }

    return 0;
}
int fib(int nunmber)
{
    if (nunmber <= 1) 
	{
       	return nunmber;
    }
    	
    return fibonacci(nunmber-1) + fibonacci(nunmber-2);
}