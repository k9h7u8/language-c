#include <stdio.h>
//Write a program to create an array of 10 integers and store a multiplication table of 5 in it
int main(){
    int arr[10];
    
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("5 * %d = %d\n ",i+1,arr[i]);
    }
    
    return 0;
}