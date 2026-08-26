#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 6;
    ptrDate->year = 2000;
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Day: ");
    scanf("%d", &ptrDate->day);

    printf("Month: ");
    scanf("%d", &ptrDate->month);

    printf("Year: ");
    scanf("%d", &ptrDate->year);
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Day : %d\n", ptrDate->day);
    printf("Month : %d\n", ptrDate->month);
    printf("Year : %d\n", ptrDate->year);
}

int menuList(void)
{
    int choice;

    printf("\n0. Exit\n");
    printf("1. Accept Date\n");
    printf("2. Print Date\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    return choice;
}

int main()
{
    struct Date dt;
    int choice;

    initDate(&dt);

    while ((choice = menuList()) != 0)
    {
        switch (choice)
        {
            case 1:
                acceptDateFromConsole(&dt);
                break;

            case 2:
                printDateOnConsole(&dt);
                break;

            default:
                printf("Invalid choice!\n");
                break;
        }
    }

    return 0;
}