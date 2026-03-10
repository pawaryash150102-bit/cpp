#include<stdio.h>
struct Date{
        //char day[20];
        //char month[20];
        int day;
        int month;
        int year;


};
void menu();
void initDate(struct Date* ptrDate); 
void printDateOnConsole(struct Date* ptrDate); 
void acceptDateFromConsole(struct Date* ptrDate);


void initDate(struct Date* ptrDate)
{
    ptrDate->day=10;
    ptrDate->month=3;
    ptrDate->year=2026;

}
void printDateOnConsole(struct Date* ptrDate)
{
    printf("DAY :%d",ptrDate->day);
    printf("DAY :%d",ptrDate->month);
    printf("DAY :%d",ptrDate->year);
   
} 
void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter the day : ");
    scanf("%d", &ptrDate->day); 
    printf("Enter the month : ");
    scanf("%d", &ptrDate->month);
    printf("Enter the year : ");
    scanf("%d", &ptrDate->year);

} 
void menu()
{
    printf("\n PRESS 0 : EXIT :\n");
    printf("PRESS 1 : ACCEPT DATE :\n");
    printf("PRESS 2 : DISPLAY DATE :\n");
}
int main()
{
    struct Date d;
    int choice;

    initDate(&d);

    do
    {
        menu();
        printf("Enter the choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                acceptDateFromConsole(&d);
                break;

            case 2:
                printDateOnConsole(&d);
                break;

            case 0:
                printf("Exit\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 0);
    return 0;
}
