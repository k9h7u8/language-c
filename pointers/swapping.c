#include <stdio.h>
void swap(int a);
int main(){
    int k=20;
    printf("the value  of variable before swap k is %d\n",k);
    swap(k);
    printf("the value  of variable after swap k is %d\n",k);
    return 0;
}
void swap(int a)
{
    int b;
    b = a;
    a =10*b;

}