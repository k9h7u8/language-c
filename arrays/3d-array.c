#include <stdio.h>
// create a 3D array and print the address of its element in increasing order
int main(){
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k <4; k++)
            {
                printf("the adress of arr[%d][%d][%d] = %u\n",i,j,k,&arr[i][j][k]);

            }
            
        }
        
    }
    return 0;
}

