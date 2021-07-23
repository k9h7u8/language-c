#include <stdio.h>
//problem for a general input provided by the user using scanf()

int main(){
    int arr[10];
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%d * %d = %d\n ",n,i+1,arr[i]);
    }
    return 0;
}