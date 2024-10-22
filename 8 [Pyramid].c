#include <stdio.h>
int main()
{
    int space;
    int stars;
    int row;
    int Num;

    printf("Enter the number of rows: ");
    scanf("%d", &Num);

    for (row = Num - 1; row <= Num; row++)
    {
        space = 0;
        stars = 0;

        for (space = 0; space < Num - row; ++space)
        {
            printf("  ");
        }

        while (stars != 2 * row - 1)
        {
            printf("* ");
            stars++;
        }

        printf("\n");
    }

    for (row = Num - 1; row >= 1; row--)
    {
        space = 0;
        stars = 0;

        // Print spaces
        for (space = 0; space < Num - row; ++space)
        {
            printf("  ");
        }

        // Print stars
        while (stars != 2 * row - 1)
        {
            printf("* ");
            stars++;
        }

        printf("\n");
    }

    return 0;
}
