#include <stdio.h>
int main() 
{
    double celsius=0,fahrenheit=0;
    printf("Enter Celsius : ");
    scanf("%lf",&celsius);
    fahrenheit= ((celsius*9/5)+32);
    printf("Fahrenheit: %.2lf\n", fahrenheit);
    return 0; 
}