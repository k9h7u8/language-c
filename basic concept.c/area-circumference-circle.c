#include <stdio.h>
#define PI 3.14

int main()
{ float r,h;
printf("Enter radius r\n");
scanf("%f", &r);

printf("Enter height h\n");
scanf("%f", &h);

printf(" The area of circle is %f\n",PI*r*r);

printf(" The circumference of circle is %f\n",2*PI*r);

printf(" The volume of cylinder is %f\n",2*PI*r*h);

return 0;
}
