#include <stdio.h>

int main() {
    int choice;
    double area;
    printf("Enter 1 for circle.\n");
    printf("Enter 2 for rectangle.\n");
    printf("Enter 3 for triangle.\n");
    printf("Enter choice:");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1 : 
            printf("Enter radius :\n");
            double rad;
            scanf("%lf",&rad);
            area = rad*rad*3.14;
            printf("Area: %lf",area);
        break;

        case 2 : 
            printf("Enter length, breadth :\n");
            double l,b;
            scanf("%lf %lf",&l, &b);
            area = l*b;
            printf("Area: %lf",area);
        break;

        case 3 : 
            printf("Enter height, base :\n");
            double h,br;
            scanf("%lf %lf",&h, &br);
            area = 0.5*h*br;
            printf("Area: %lf",area);
        break;

        default :
            printf("Error in choice.");
   }
    return 0;
}