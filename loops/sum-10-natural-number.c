#include <stdio.h>

// sum of first 10 natural number using whlie loop
int main()
{ int i =1,sum =0;
    while (i<11)
    {
        printf("%d",i);
        sum += i;
        i++;
    } 
    printf(" the sum is %d\n",sum);
    return 0;
    
}