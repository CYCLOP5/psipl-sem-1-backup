#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define COLOR_BOLD_SLOW_BLINKING_RED  "\e[1;5;31m"
#define COLOR_BOLD_SLOW_BLINKING_BLUE  "\e[1;5;34m"
#define COLOR_OFF   "\e[m"
#define COLOR_BOLD  "\e[1m"

struct Flight {
    char og[20];
    char dest[20];
    int start_time;
    int arrival_time;
    int seats;
};

void get_flight_details(struct Flight flights[], int n) 
{
    int i;
    printf("Enter details for all 20 flights in the format of Departure city, Arrival city, Departure time, Arrival time, Number of seats in flight: \n");
    for (i = 0; i < n; i++)
    {
        
        scanf("%3s %3s %d %d %d", flights[i].og, flights[i].dest, &flights[i].start_time, &flights[i].arrival_time, &flights[i].seats);
        if(flights[i].start_time == 2400 || flights[i].arrival_time==2400)
        {
            printf("Error: Time cannot be above 2400 or 2400, terminating program.");
            exit(0);
        }
    }
}

void book_flight(struct Flight flights[], int n) {
    int j;
    char wherego[20], whereland[20];
    char exitcheck;

    while (1)
    {
        printf("\nEnter your query in the format of | Departure City Arrival City |:");
        scanf("%3s %3s", wherego, whereland);
        for (j = 0; j < n; j++) 
        {
            if (strcmp(flights[j].og, wherego) == 0 && strcmp(flights[j].dest, whereland) == 0 && flights[j].seats > 0) 
            {
                flights[j].seats--;
                printf(COLOR_BOLD"Booking Confirmed:\n\n"COLOR_OFF);
                printf("Your flight departs from");
                printf(COLOR_BOLD_SLOW_BLINKING_RED" %s ",flights[j].og  );
                printf(COLOR_OFF "at");
                printf(COLOR_BOLD_SLOW_BLINKING_BLUE" %d ",flights[j].start_time);
                printf(COLOR_OFF"and arrives at");
                printf(COLOR_BOLD_SLOW_BLINKING_RED" %s ",flights[j].dest);
                printf(COLOR_OFF "at");
                printf(COLOR_BOLD_SLOW_BLINKING_BLUE" %d.",flights[j].arrival_time);
                printf(COLOR_OFF "\n\nThe amount of seats left in the same flight is: %d\n", flights[j].seats);
                break;
            }
        }
        if (j == n) 
        {
            printf("\nNo flights available from %s to %s\n", wherego, whereland);
        }

        printf("\nPress C to end, otherwise press D to start another query: ");
        scanf(" %c", &exitcheck);
        if (exitcheck == 'C' || exitcheck == 'c') 
        {
            break;
        }
        else
        {
            continue;
        }
    }
}

int main() 
{
    struct Flight flights[20];
    int n = 20;
    
    get_flight_details(flights, n);
    book_flight(flights, n);

    return 0;
}

/**
LAX JFK 1330 2100 1
ORD ATL 1400 2000 2
SFO MIA 1500 2300 3
DFW SEA 1600 2200 4
LAS BOS 1700 0300 5
MSP SLC 1530 2200 6
IAH DCA 1430 2100 7
DEN PHL 1530 2300 8
PHX DTW 1400 2200 9
MCO IAD 1500 2300 10
EWR LGA 1430 1800 11
LGA ORD 1500 1800 12
SEA MCO 1400 2200 13
ATL DFW 1530 2000 1
JFK LAS 1600 2300 2
MIA MSP 1630 2300 3
BOS PHX 1400 2200 4
SLC IAH 1430 2100 5
PHL DEN 1500 2300 6
DCA SFO 1330 2100 7
*/