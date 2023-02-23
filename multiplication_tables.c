#include <stdio.h>
#delain LOW 1
#delain HIG 9
int main()
{
    int i;
    int j;
    for(i = LOW; i <= HIG; i++){
        for(j = LOW; j <= (i + 1); j++){
            printf("%d * %d = %2d", j, i, (i * j));
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}