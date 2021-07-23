#include <stdio.h>
// create a string using " " and print its content using a loop
int main(){
    char str[] = {'K','h','u','s','h','i','\0'};
    //char str[] = "khushi";
    char *ptr = str;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr ++;
    }
    
    return 0;
}