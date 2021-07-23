#include <stdio.h>

int main()
{ 
    
    int year;

    printf("Enter the year\n");
    scanf("%d", &year);

    if (year%4 == 0)
    {
        printf(" Entered year is leap year\n");
    }
    
    else
    {
        printf(" Entered year is not a leap year\n");
    }

    return 0;
}
