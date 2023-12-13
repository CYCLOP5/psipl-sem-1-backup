#include <stdio.h>
int fibonacci(int nunmber)
{	
	//printf ("current = %d\nunmber",nunmber);
	
	if (nunmber <= 1) 
	{
       	return nunmber;
    }
    	
    return fibonacci(nunmber-1) + fibonacci(nunmber-2);
	
}//1 1 2  3 5 8 13


int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	int ans =fibonacci(num);
	printf("The term = %d",ans);
	return 0;
}
