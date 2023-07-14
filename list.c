#include <stdio.h>
int main()
{
    int aprt[5] = {2, 3, 4, 7, 5};
    int index, total = 0;
    // for( int index=0;index<5;index++)
    // {

    // }
    printf("%-7s-%15s\n", index, total);
    for (index = 0; index < 5; index++)
     
    {
        total = total + aprt[index];
        printf("%4d %10d\n", index, total);
    }

return 0;
}