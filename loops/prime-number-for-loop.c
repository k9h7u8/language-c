#include <stdio.h>

int main(){
    
    // prime numbers using loop
    int i,n,prime=1;
    printf(" enter the value of n\n");
    scanf("%d",&n);

    for ( i = 2; i <n; i++)
    {
        if (n % i ==0)
        {
            prime =0;
            break;
        }
        
    }
    if (prime ==0 )
    {
        printf("the number is not a prime number");
    }
    else
    {
        printf("the number is a prime number");
    }
    
    return 0;
} 