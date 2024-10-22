#include <stdio.h>
    int main ()
{
    int Lower;
    int Upper;
    int Prime;

    printf("enter your lower value[lower value should be greater than 1]: ");
    scanf("%d", &Lower);
    // assuming correct data is entered
    printf("enter your higher value: ");
    scanf("%d", &Upper);

    int Div = Lower;

    while (Div < Upper + 1)
    {
        Prime = 1;
        for (int i = 2; i < Div; i++)
        {
            if (Div % i == 0)
            {
                Prime = 0;
            }
        }

        if (Prime == 0)
        {
            printf("%d is not prime number\n", Div);
        }
        else if (Prime == 1)
        {
            printf("%d is a prime number\n", Div);
        }
        
        Div += 1;
    }
        
}