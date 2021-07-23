#include <stdio.h>

int main()
{
    // number is divisble by 97 or not 
    int num;
    printf("Enter number \n");
    scanf("%d",&num);

    printf(" The value is %d\n", num%97);

    if (num%97==0)
    {
        printf("Number is divisible by 97");
    }
    
    else
    {
        printf ("Number is not divisible by 97");
    }
    return 0;
}
