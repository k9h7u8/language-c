#include <stdio.h>

//factorial of a given number
int main()
{ int i,n,factorial=1;
    printf(" enter the value of n\n");
    scanf("%d",&n);

 for ( i = 1; i <= n; i++)
 {
     printf("%d\n",i);
     factorial *=i;
     
}
    printf("the value of factorial  %d is %d",n,factorial);

    return 0;
 
}