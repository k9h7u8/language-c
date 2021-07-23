#include <stdio.h>

// subtraction of one pointer from another

int main(){
    float i = 3;
    float *j = &i;
    printf("the value of j is %u\n",j);
    float a = 5;
    float *b =&a;
    printf("the value of b is %u\n",b);
    //int y =  *(&j) - *(&b);
    int y = j - b;
    printf("%u\n",y);

    return 0;
    
    }                         