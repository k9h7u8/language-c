#include <stdio.h>
int factorial(int x);

int main(){
    int x = 8;
    printf("The value of factorial %d is %d\n",x,factorial(x));
    return 0;
}
int factorial(int x)
    {
        printf("calling function is (%d)\n",x);
    
    if (x == 1 || x==0)
    {
        return 1;
    }
    
    else
    {
        return x *factorial(x-1);
    }

    }
    