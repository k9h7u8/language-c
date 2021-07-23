#include <stdio.h>

char *my_strcpy(char *destination, char *source)
{
    char *start = destination;

    while(*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    //*destination = '\0'; // add '\0' at the end
    return start;
}
int main(){
    char source [] = "harry";
    char destination [10];
    my_strcpy(destination,source);
    printf("%s",destination);

    return 0;
}