#include <stdio.h>
int variable(int i);
int main(){
    int i = 8;
    
    printf("the value  of variable i is %d\n",i);
    //variable(i);
    printf("the address of variable i is %u\n",&i);
    
    printf("the address of variable i is %u\n",variable(i));
    return 0;
}
int variable(int i) 
{
    int j = &i;
    //printf("the address of variable i is %u\n",&i);
}