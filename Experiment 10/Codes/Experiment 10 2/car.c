#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void FindOwnerInfo(char* regNumber) 
{
    FILE* record = fopen("vehicle_records.txt", "r");
    if (record == NULL) 
    {
        printf("Error: File not found.\n");
        exit(0);
    }
    char line[100];
    char fileRegNumber[20];
    char ownerName[50];
    char ownerCountry[50];
    int found = 0;

    while (fgets(line, sizeof(line), record)) 
    {
        sscanf(line, "%s %s %s", fileRegNumber, ownerName, ownerCountry);
        if (strcmp(fileRegNumber, regNumber) == 0) 
        {
            printf("Information of Owner of vehicle: %s , %s\n", ownerName, ownerCountry);
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("Registration number not found.\n");
    }

    fclose(record);
}

int main() {
    char regNumber[20];
    
    while(1) 
    {
        printf("Enter the registration number: ");
        scanf("%s", regNumber);
        FindOwnerInfo(regNumber);
        printf("Press 1 to continue, 0 to exit: ");
        int choice;
        scanf("%d", &choice);
        if (choice == 0) 
        {
            break;
        }
    }
    return 0;
}