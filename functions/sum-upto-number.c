#include <stdio.h>
int sum (int n);

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("The value of sum of %d is %d\n",n,sum(n));
    return 0;
}
int sum (int n)
{
    if( n == 0)
    {
        return 0;
    }
    else
    {
        return n+ sum(n-1);
    }
}