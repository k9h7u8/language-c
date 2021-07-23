#include <stdio.h>
int presence(char st[],char c){
   char *ptr = st;
   int present =0;
   while (*ptr != '\0')
   {
       if (*ptr == c)
       {
            present =1;

       }
      ptr++; 
   }
   
    return present ;
}

int main(){
    char st[] ="harry";
   int result= presence(st,'h');
   printf(" IF RESULT EQUAL TO 1 THEN CHARACTER IS PRESENT OTHERWISE CHARACTER IS NOT PRESENT\n");
   printf(" the value of character is :%d",result);
    return 0;
}