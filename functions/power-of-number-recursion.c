#include <stdio.h>
int power(int base, int p);
int main(){
    int n,p,result;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Enter the (positive) power:\n");
    scanf("%d",&p);
    
    result =power(n,p);
    printf(" %d ^ %d = %d",n,p,result);
   
    return 0;
}
int power(int base, int p)
{
    //printf("calling function is (%d)\n",p);

    if(p!=0)   
    {
        return (base * power(base,p-1));
    }
    else
    {
        return 1;
    }
}