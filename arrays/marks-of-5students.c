#include <stdio.h>

int main(){
    // program to accept marks of five student in an array and print them to screen
    int marks[5];
    for (int i = 0; i < 5; i++)
    {  
    printf(" enter the value of marks for student %d : \n",i+1);
    scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {  
    printf("  the value of marks for student %d is %d \n",i+1,marks[i]);
    
    }



    return 0;
}