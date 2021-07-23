#include <stdio.h>

// create a 2d array by taking input from the user. 
//write a display function to print the content of the 2d array on the screen
 
 int main(){
     int display[3][3];
     for (int i = 0; i <3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of display[%d][%d]",i+1,j+1);
            scanf("%d",&display[i][j]);
        }
        
     }
     
     printf("two dimensional elements are:\n");
     for (int i = 0; i <3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",display[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
     }
     return 0;
 }

    
