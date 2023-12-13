#include <stdio.h>
int sumoffactors(int num) 
{
    int sumoffactors = 0;
    for (int i = 1; i <= num/2; i++) 
    {
        if (num % i == 0) 
        {
            sumoffactors += i;
        }
    }
    return sumoffactors;
}

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sumofnum1 = sumoffactors(num1);
    int sumofnum2 = sumoffactors(num2);
    if (sumofnum1 == num2 && sumofnum2 == num1) 
    {
        printf("They are amicable");
    } 
    else 
    {
        printf("They ain't amicable");
    }

    return 0;
}

