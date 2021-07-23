#include <stdio.h>

int main()
{ int i =1, sum =0;
    do
    {
        printf("%d",i);
        sum +=i;
        i++;
    } while (i<11);
    printf("sum is %d\n",sum);

    return 0;
    
}
