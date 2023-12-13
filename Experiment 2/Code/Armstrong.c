#include <stdio.h>

#include <math.h>

int main() {
    int num, copyofnum, numofdigits, remainder, sum;
    sum = 0;
    numofdigits = 0;
    printf("Enter Number : ");
    scanf("%d", & num);
    copyofnum = num;
    while (copyofnum > 0) {
        copyofnum = copyofnum / 10;
        numofdigits++;
    }
    copyofnum = num;
    while (copyofnum > 0) {
        remainder = copyofnum % 10;
        sum = sum + pow(remainder, numofdigits);
        copyofnum = copyofnum / 10;
    }
    if (num == sum) {
        printf("It is armstrong number");
    } else {
        printf("Not an armstrong number");
    }
    return 0;
}
