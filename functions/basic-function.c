#include <stdio.h>
void display();    //function prototype
int main(){
    int a;
    printf("initialising display function\n");
    display();     // function call
    printf("display function is finished \n");
    return 0;
} 
void display(){    // function definition
    printf(" displaying function\n");
}