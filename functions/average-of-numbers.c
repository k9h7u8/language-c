#include <stdio.h>
float average(int a,int b,int c);

int main(){
    int a,b,c;

    printf("Enter the values of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("the value of average is %f",average(a,b,c));
    return 0;
}
float average(int a,int b,int c)
{
    int d;
    d = (a+b+c)/3;
    return d;
}
    

