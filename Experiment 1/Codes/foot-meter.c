#include <stdio.h>
#define F2M 0.3048
int main()
{
    double feet=0,meter=0;
    printf("Enter feet :");
    scanf("%lf", &feet);
    meter = feet*F2M;
    printf("Meter: %.3lf \n", meter);
    return 0;
}