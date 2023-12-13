#include <stdio.h>

int main()
{
    int ogdays,years=0,months=0,days=0;
    printf("Enter Days :");
    scanf("%d",&ogdays);
    years =ogdays/365;
    months=(ogdays-years*365)/30;
    days=(ogdays-years*365)-(months*30);
    printf("years :%d",years);
    printf("\nmonths :%d",months);
    printf("\ndays :%d\n",days);
}
