#include <stdio.h>
float farenheit(int celcius);

int main(){
   int c;
   printf("Enter the values of celcius in degree\n");
   scanf("%d",&c);
   printf("The value of temperature in farenheit in degree is %f\n",farenheit(c));
    return 0;
}
float farenheit(int celcius)
{   
    float f;
     f = (celcius*9/5)+32;
    return f;
}