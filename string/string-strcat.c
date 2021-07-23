#include <stdio.h>
#include <string.h>
int main(){
    char s1[44] = "hello ";
    char s2[] = "harry";
    strcat(s1,s2);
    printf("now the s1 is %s",s1);
    return 0;
}