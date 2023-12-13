#include <stdio.h>
#include <string.h>
#include <ctype.h>


int palindromeornot(char str[], int start, int end) 
{
    while (start < end) 
    {
        if (tolower(str[start]) != tolower(str[end]))
        {
            return 0;//not
        }
        start++;
        end--;
    }
    return 1;
}

int main() 
{
    char text[100];
    printf("Enter Sentence: ");
    fgets(text, 100, stdin);
    printf("The palindromes are: ");
    int len = strlen(text);
    int start = 0;
    int end = 0;
    for (int i = 0; i < len; i++) 
    {
        if (text[i] == ' ' || text[i] == '\n')
        {
            end = i - 1;
            if (palindromeornot(text, start, end)) 
            {
                for (int j = start; j <= end; j++) 
                {
                    printf("%c", text[j]);
                }
                printf("\t");
            }
            start = i + 1;
        }
    }
 
    return 0;
}
