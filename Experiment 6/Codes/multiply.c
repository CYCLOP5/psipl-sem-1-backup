#include <stdio.h>
int mult(int a,int b)
{	
	//printf ("current = %d%d\n",a,b);
	int answer =0;
	if (b==0) 
	{
       	return 0;
	}
	else
	{
		answer=a+mult(a,b-1);
	}
    	
    	
    	return answer;
	
}


int main()
{
	int num1,num2;
	printf("Enter numbers:");
	scanf("%d%d",&num1,&num2);
	int ans =mult(num1,num2);
	printf("\nMultipying both numbers give = %d",ans);
	return 0;
}
