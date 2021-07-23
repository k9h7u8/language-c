#include <stdio.h>

int main(){
    // comparision of two pointer variable
    int i ;
    printf("enter the value of i \n");
    scanf("%d",&i);
    int *j = &i;
    printf("the value of j is %u\n",j);

    int a ;
    printf("enter the value of a \n");
    scanf("%d",&a);
    int *b =&a;
    printf("the value of b is %u\n",b);

    if (*j < *b)
    {
        printf("a is greater than i");
    }
    else
    {
        printf("i is greater than a");
        
    }
    
    return 0;
}