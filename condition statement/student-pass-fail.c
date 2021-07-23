#include <stdio.h>

int main()
{
    //  a student is pass or failas it requires a total of 40% and at least 33% in each subject to pass
 int numMaths,numScience,numSst;
 float total;

    printf("Enter the marks of Maths, Science, Sst out of 100\n");
    scanf("%d" "%d" "%d" ,&numMaths,&numScience,&numSst);

        total = (numMaths + numScience + numSst)/3;

           if ((total<40)|| numMaths<33 || numScience<33 || numSst<33)
            {
                printf("Your total percentage is %f and you are fail\n",total);
            
            }
            else
            {
                printf("Your total percentage is %f and you are pass\n",total);
            }
            
    return 0;
}