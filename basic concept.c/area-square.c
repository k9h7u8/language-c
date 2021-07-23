#include <stdio.h>
int A(int side){
    int area ;
    area =side *side;
    return area;

}
int main(){
    int side;
    printf("enter the side:\n");
    scanf("%d",&side);
    A(side);
    printf("area is %d",A(side));

    return 0;
}