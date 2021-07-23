#include <stdio.h>
int primenumber(int n);
int main(){
    int n1,n2,prime;
    printf("Enter two postive values\n:");
    scanf("%d %d",&n1,&n2);

    printf(" the prime numbers between %d and %d is :",n1,n2);
    for ( int j = n1+1; j< n2;j++)
    {
        prime = primenumber(j);
        if (prime == 1)
        {
            printf("%d\n",j);
        }
        
    }
    
    return 0;
}
int primenumber(int n)
{
    int i ,prime =1;
    for (i =2;i<n;i++)
    {
        if(n%i==0)
        {
            prime =0;
            break;
        }
        
    }
    return prime;
}