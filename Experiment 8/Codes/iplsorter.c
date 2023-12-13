#include <stdio.h>
#include <string.h>	
#include <stdlib.h>

struct player {
    char name[20];
    char country[20];
    double battingavg;
};


void selectionSort(struct player arr[], int n) 
{
    int i, j, max_idx;
    struct player temp;
    for (i = 0; i < n-1; i++) 
    {
        max_idx = i;
        for (j = i+1; j < n; j++) 
        {
            if (arr[j].battingavg > arr[max_idx].battingavg) 
            {
                max_idx = j;
            }
        }
        temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() 
{
    struct player allmyplayers[11];
    printf("Enter name, country and batting average for all 11 players (separated by a space): \n");
    for (int i = 0; i < 11; i++) 
    {
        scanf("%s",allmyplayers[i].name);
        scanf("%s",allmyplayers[i].country);
        scanf("%lf", &allmyplayers[i].battingavg);
    }
    selectionSort(allmyplayers, 11);
    printf("\nSorted players by batting average:\n");
    for (int i = 0; i < 11; i++) 
    {
        printf("%s (%s): %.2lf", allmyplayers[i].name, allmyplayers[i].country, allmyplayers[i].battingavg);
        printf("\n");
    }
   
    printf("The best batsman from your IPL team for upcoming match is: %s", allmyplayers[0].name);
    return 0;
}
/*
Harry AUS 34.56
Hitesh IND 78.90
Kanye WI 12.34
Hardik IND 56.78
Virat IND 90.12
Babar PAK 45.67
Sachin IND 89.01
Kautubh JAP 23.45
Kshitij MLM 67.89
Marshall NZ 45.67
Sindhu IND 78.90
 */