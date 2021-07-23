#include <stdio.h>
//Write a program containing functions that counts the number of positive integers in an array.

int main(){
 int size, arr[10]; 
 int positive_count = 0;
 int negative_count = 0;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    
    printf("Enter the elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>=0)
        {
            positive_count++;
        }
        else
        {
            negative_count++;
        }
    }
    
    printf("The total number of positive integer in an array is = %d\n",positive_count);
    printf("The total number of negative integer in an array is = %d\n",negative_count);

    return 0;
}