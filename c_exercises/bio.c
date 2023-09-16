#include <stdio.h>
#include <string.h>

void userName(char first_name[], char second_name[]);

void userName(char first_name[], char second_name[])
{
    printf("Please enter your first name: ");
    scanf("%s", first_name);
    printf("Please enter your second name: ");
    scanf("%s", second_name);

    printf("\nHello %s %s.\n", first_name, second_name);
    printf("\nPlease tell me your date of birth: ");

}

int main(int argc, char **argv)
{
    char fname[100], sname[100];
    char month_of_birth[100];
    int day_of_birth, year_of_birth;
    int i = 0;

    userName(fname, sname);

    printf("\nEnter month of birth: ");
    scanf("%s", &month_of_birth);
    
    if (strcmp(month_of_birth, "January") == 0 || strcmp(month_of_birth, "February") == 0 || strcmp(month_of_birth, "March") == 0 ||
        strcmp(month_of_birth, "April") == 0 || strcmp(month_of_birth, "May") == 0 || strcmp(month_of_birth, "June") == 0 ||
        strcmp(month_of_birth, "July") == 0 || strcmp(month_of_birth, "August") == 0 || strcmp(month_of_birth, "September") == 0 ||
        strcmp(month_of_birth, "October") == 0 || strcmp(month_of_birth, "November") == 0 || strcmp(month_of_birth, "December") == 0)
    {
        printf("%s\n", month_of_birth);
    }
    else
    {
        printf("Invalid month\n");
        return 1;
    }

    printf("Enter day of birth: ");
    scanf("%d", &day_of_birth);
    if (day_of_birth >= 1 && day_of_birth <= 31)
    {
        printf("%d\n", day_of_birth);
    }
    else
    {
        printf("Invalid day of birth");
        return 1;
    }

    printf("Enter year of birth: ");
    scanf("%d", &year_of_birth);

    if (year_of_birth <= 1910 || year_of_birth >= 2023)
    {
        printf("Invalid year\n");
        return 1;
    }

    printf("\nYeeeyyyy\nYour birthday is on %s %d, %d\nLets cut some cake.\n", month_of_birth, day_of_birth, year_of_birth); 
    return 0;

}