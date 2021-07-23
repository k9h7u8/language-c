#include <stdio.h> 

int main()
{ int P,R,T;
printf("Enter principal P\n");
scanf("%d", &P);

printf("Enter rate R\n");
scanf("%d", &R);

printf("Enter time T\n");
scanf("%d", &T);

printf("The value of simple interest is %d\n",P*R*T/100);

return 0;
}