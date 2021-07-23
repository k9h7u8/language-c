#include <stdio.h>
int factorial(int n);

int main(){
    int n,c,r;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    printf("Enter the value of r\n");
    scanf("%d",&r);

     c = (factorial (n)/(factorial(n-r)*factorial (r)));
     printf("the value of c %d\n",c);

    return 0;
}
int factorial(int n)
{
        printf("calling function is (%d)\n",n);

     if (n == 1 || n==0)
    {
        return 1;
    }
    
    else
    {
        return n *factorial(n-1);
    }

}