#include <stdio.h>
    int main ()
{

    int Num;
    printf("input your number: ");
    scanf("%d", &Num);

    for (; Num > 0; Num--)
    {
        if (Num % 2 != 0)
        {
            printf("  %d  ", Num);
        }
    }
}