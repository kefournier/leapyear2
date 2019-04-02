#include <stdio.h>
#include <cs50.h>

/*A program to determine if a year is a leap year*/
/*Every year that is evenly divisible by four is
a leap year except for years that are evenly
divisible by 100 and not evenly divisible by 400.*/

int main (void) {

        printf("What year would you like to check? ");
        int year = get_int();

        if (year <= 0) {
            printf("Please enter a valid year.\n");
            return 1;
        }

    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        printf("%d is a leap year!\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

