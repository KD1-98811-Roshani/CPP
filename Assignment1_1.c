#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date : %d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Day : ");
    scanf("%d", &ptrDate->day);

    printf("Month : ");
    scanf("%d", &ptrDate->month);

    printf("Year : ");
    scanf("%d", &ptrDate->year);
}

int main()
{
    int choice;
    struct Date date;

    printf("1. Initialize Date\n");
    printf("2. Accept Date\n");
    printf("3. Print Date\n");

    printf("Enter choice : ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        initDate(&date);
        printDateOnConsole(&date);
    }
    else if(choice == 2)
    {
        acceptDateFromConsole(&date);
    }
    else if(choice == 3)
    {
        printDateOnConsole(&date);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}