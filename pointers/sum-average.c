#include <stdio.h>
void sumandavg(int a, int b, int *sum, float *avg)
{
     *sum = a + b;
     *avg = (float)(*sum)/2;
}
int main(){
    int i=3 ,j=6;
    int sum;
    float avg;
    sumandavg(i , j, &sum, &avg);
    printf("the value of sum is %d \n",sum);
    printf("the value of average is %f \n",avg);

    return 0;
}
