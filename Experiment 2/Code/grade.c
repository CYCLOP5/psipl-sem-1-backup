#include <stdio.h>

int main() {
    int grade;
    printf("Enter grade:");
    scanf("%d", &grade);
    if(grade>100 || grade<0)
    {
        printf("Error");
        exit(0);
    }
    if (grade >=80 && grade <=100)
    {
        printf("Grade O.");   
    }
    else if (grade>= 70  && grade<80)
    {
        printf("Grade A.");
    }
    else if (grade >=60 && grade<70)
    {
        printf("Grade B");
    }
    else if (grade >= 50 && grade<60)
    {
        printf("Grade C.");
    }
    else if (grade <50 && grade>=03)
    {
        printf("Fail.");
    }
    else
    {
        printf("Invalid input.");
    }
    return 0;
}