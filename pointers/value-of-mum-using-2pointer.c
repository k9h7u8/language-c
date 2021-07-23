#include <stdio.h>

int main(){
    int i=675;
    int *j =&i;
    int **k= &j;
    printf("the value of variable i is %d\n",**k);
    return 0;
}