#include <stdio.h>
//Create an array of size 3x10 containing multiplication tables of 
//the numbers 2,7 and 9, respectively
int main(){
    int multable[3][10];
    printf("The multiplication table of 2:\n");
    for (int i = 0; i < 10; i++)
    {
        multable[0][i] = 2*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("2 * %d = %d\n ",i+1,multable[0][i]);
       
    }
     printf("The multiplication table of 7:\n");
    for (int i = 0; i < 10; i++)
    {
        multable[1][i] = 7*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("7 * %d = %d\n ",i+1,multable[1][i]);
       
    }
     printf("The multiplication table of 9:\n");
    for (int i = 0; i < 10; i++)
    {
        multable[2][i] = 9*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("9 * %d = %d\n ",i+1,multable[2][i]);
       
    }
    return 0;
}