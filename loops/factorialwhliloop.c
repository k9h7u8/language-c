#include <stdio.h>

int main()
{ int i=1 ,n ,factorial=1;
    printf(" enter the value of n\n");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",i);
        factorial *=i;
        i++;
        
    }
    
     printf(" the value of factorial %d is %d\n",n,factorial);

     return 0;
}