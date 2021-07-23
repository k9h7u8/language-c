#include <stdio.h>

int main()
{ 
    
    //97 - 122 = a -z ASCII VALUES
char ch;
printf(" Enter the character \n");
scanf("%c", &ch);

    if (ch<=127 && ch>=97)
        {
         printf(" Character enter is lowercase");
         }

    else
    {
          printf(" Character enter is not lowercase");
          }
return 0;
}