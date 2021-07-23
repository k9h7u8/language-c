#include <stdio.h>

// addition of a number to a pointer
// subtraction of a number from a pointer

int main(){
    int i = 34;
    int *ptr = &i;
    
    printf("the value of ptr is %u \n", ptr);
    // ptr --; 
    // ptr = ptr - 1;
    // ptr ++;   
     ptr = ptr + 1;
    printf("the value of ptr is %u \n", ptr);
    return 0;
}