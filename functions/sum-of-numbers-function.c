#include <stdio.h>
// sum is a function which takes a and b as input and returns an interger as an output
int sum(int a ,int b);   //funtion prototype declaration

int main(){
    int c;
    c = sum(2,5);
    printf("the value of c is %d\n",c);
    return 0;
}
int sum(int a ,int b)
{
    int c ;
    c = a+b;
    return c;
}