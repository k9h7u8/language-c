#include <stdio.h>

//sum of the numbers occuring in the multiplication table of 8
int main()
{ int i=1,sum=0;
while (i<11)
{
    printf("%d",8*i);
    sum +=8*i;
    i++;
}
    printf("sum is %d\n",sum);

    return 0;

}