#include <stdio.h>

int main(){
    int a=3;
    int *b=&a;
    printf("the address of variable a is %u\n",&a);
    printf("the value  of variable a is %d\n",*(&a));
    printf("the value  of variable a is %d\n",*b);
    

    return 0;
}