#include <stdio.h>
#include <stdbool.h>

bool iscoprime(int num1,int num2);

int main()
{
	int number1,number2=0;
	printf("Enter 1st number:");
        scanf("%d", &number1);
        printf("Enter 2nd number:");
        scanf("%d", &number2);
        if(iscoprime(number1,number2))
	{
		printf("\nThe numbers %d and %d are coprime.",number1,number2);
	}
        else
        {
		printf("\nThe numbers %d and %d are not coprime.",number1,number2);
        }
}

bool iscoprime(int num1,int num2)
{
	int smaller = num1 < num2 ? num1 : num2; 
	// u dont need to run till 13 coz i needs to run to smallest of the 2 nums since factor will be less than both the nums 
    	for (int i = 2; i <= smaller; i++)
    	{
		if (num1 % i == 0 && num2 % i == 0) 
		{
		    return false; 
		}   	
    	}
    return true;
}

