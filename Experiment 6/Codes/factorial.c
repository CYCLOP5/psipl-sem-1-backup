#include <stdio.h>
int fact(int number)
{	
	//printf ("current = %d\n",number);
	int answer =0;
	if (number == 0) 
	{
       		 return 1;
    }
    else
    {
    	answer = number*fact(number-1);
    }
    	
    return answer;
	
}


int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int ans =fact(n);
	printf("\nAnswer = %d",ans);
	return 0;
}
