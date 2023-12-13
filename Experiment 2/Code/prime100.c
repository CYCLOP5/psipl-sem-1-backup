#include <stdio.h>

int main() {
        int rem = 0;
        int num = 2;
  	int i =0;
        int range = 0;
        printf("Enter range from 1 to:");
        scanf("%d", &range);
        while (num <= range) {
               i = 2;
               rem=0;
                while (i <= num/2) {
                        if (num % i == 0) {
                                rem++;
                                break; 
                        }
                        i++;
                }
                if (rem == 0 && num != 1) {
                        printf("%d ", num);
                }
                num++;
        }
        return 0;
}

