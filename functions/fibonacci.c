#include <stdio.h>
int fabonacci(int n);

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("The value of fabonacci series of %d is %d\n",n,fabonacci(n));
    return 0;
}
int fabonacci(int n)
{   
    
    if (n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        return fabonacci(n-1) + fabonacci(n-2);
    }

}

