#include <stdio.h>
int strlen(char *st){
    char *ptr = st;
    int len =0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main(){
    char st[50];
    int length;
    printf("enter the vlue of string : \n");
    scanf("%s",st);
    
    length = strlen(st);
    printf("the length of string is %d",length);

    return 0;
}