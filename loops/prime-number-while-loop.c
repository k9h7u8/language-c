#include <stdio.h>

int main()
{
    
    // prime numbers using another loop
    int i=2,n,prime=1;
    printf(" enter the value of n\n");
    scanf("%d",&n);

    while (i<n)
    
    {
        if (n % i ==0)
        {
            prime =0;
            
            break;
        }
        i++;
    } 

    if (prime ==0)
    {
        printf("the number is not a prime number");
    }
    else
    {
        printf("the number is a prime number");
    }
    return 0;
}
//