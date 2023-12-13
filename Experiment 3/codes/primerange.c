#include <stdio.h>



void primefind(int start,int end);
int main() 
{
        int startnum=0;
        int endnum=0; 	
        printf("Enter start number:");
        scanf("%d", &startnum);
        printf("Enter end number:");
        scanf("%d", &endnum);
        primefind(startnum,endnum);
        printf("\nThese are the prime numbers between %d and %d.",startnum,endnum);
        return 0;
}



void primefind(int start,int end)	 
{
	int rem = 0;
	int i =0;
	while (start <= end) 
	{
               i = 2;
               rem=0;
                while (i <= start/2) 
                {
                        if (start % i == 0) 
                        {
                                rem++;
                                break; 
                        }
                        i++;
                }
                if (rem == 0 && start != 1) 
                {
                        printf("%d ", start);
                }
                start++;
        }
}


