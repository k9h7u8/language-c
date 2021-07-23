#include <stdio.h>
float force(float mass);

int main(){
    float m;
    printf("Enter the values of mass in kgs\n");
    scanf("%f",&m);
    printf("force of attraction of abody in newton is %f\n",force(m));
    return 0;
}
float force(float mass)
{
    float f;
    f =mass*9.8;
    return f;
}