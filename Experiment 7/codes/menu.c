#include <stdio.h>
#include <ctype.h>

void copy(char destStr[], char srcStr[]) 
{
    int i = 0;
    while (srcStr[i] != '\0') 
    {
        destStr[i] = srcStr[i];
        i++;
    }
    destStr[i] = '\0';
}

int stringLength(char str[]) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}

int compareStrings(char str1[], char str2[]) 
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        char char1 = str1[i];
        char char2 = str2[i];
        if (char1 >= 'A' && char1 <= 'Z') 
        {
            char1 += 32;
        }
        if (char2 >= 'A' && char2 <= 'Z') 
        {
            char2 += 32;
        }

        if (char1 != char2) 
        {
            return 0;
        }
        i++;
    }
}

void reverseString(char str[]) 
{
    int n=0;
    char temp[20];
    n=stringLength(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]!='\0')
        {
            temp[i]=str[n-i-1];
        }
    }
    printf("Reversed String Is :%s\n",temp);
}

void concatenateStrings(char destStr[], char srcStr[]) 
{
    int i = 0, j = 0;
    while (destStr[i] != '\0') 
    {
        i++;
    }
    while (srcStr[j] != '\0') 
    {
        destStr[i] = srcStr[j];
        i++;
        j++;
    }
    destStr[i] = '\0';
}

void convertToUpper(char str[]) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        char c = str[i];
        if (c >= 'a' && c <= 'z')
        {       
            str[i] = c - 32;
        }
        i++;
    }
}

int main() 
{
    char choice;
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Menu:\n");
    printf("1. Copy string\n");
    printf("2. Find string length\n");
    printf("3. Compare strings \n");
    printf("4. Reverse string\n");
    printf("5. Concatenate strings\n");
    printf("6. Convert lowercase to uppercase\n");
    printf("7. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                copy(str1, str2);
                printf("Copied Result: %s\n", str1);
                break;
            case '2':
                printf("Length of the first string: %d\n",stringLength(str1));
                break;
            case '3':
                if (compareStrings(str1, str2)) {
                    printf("Strings are equal\n");
                } else {
                    printf("Strings are not equal\n");
                }
                break;
            case '4':
                reverseString(str1);
                break;
            case '5':
                concatenateStrings(str1, str2);
                printf("Concatenated Result: %s\n", str1);
                break;
            case '6':
                convertToUpper(str1);
                printf("Uppercase Result: %s\n", str1);
                break;
            case '7':
                return 0;
            default:
                printf("Invalid choice. Please try again\n");
        }
    }

    return 0;
}