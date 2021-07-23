#include <stdio.h>
#include <string.h>
int main(){
    char s1[45] = "hello";
    char *s2 = "hezlo";
    int val = strcmp(s1,s2);
    printf("now the val is %d",val);
    return 0;
}