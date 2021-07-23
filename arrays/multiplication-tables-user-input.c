#include <stdio.h>
// repeat problem 7 for a custom input given by user

int main(){
    int multable[3][10];
    int num1, num2,num3;
    printf("enter three values:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("The multiplication table of %d:\n",num1);
    for (int i = 0; i < 10; i++)
    {
        multable[0][i] = num1*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%d * %d = %d\n ",num1,i+1,multable[0][i]);
       
    }
     printf("The multiplication table of %d:\n",num2);
    for (int i = 0; i < 10; i++)
    {
        multable[1][i] = num2*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%d * %d = %d\n ",num2,i+1,multable[1][i]);
       
    }
     printf("The multiplication table of %D:\n",num3);
    for (int i = 0; i < 10; i++)
    {
        multable[2][i] = num3*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%d * %d = %d\n ",num3,i+1,multable[2][i]);
       
    }
    return 0;
}