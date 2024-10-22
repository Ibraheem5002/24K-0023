#include <stdio.h>
    int main()
{
    int Array1 [2][3] = {{1,2,3},{4,5,6}};
    int Array2 [3][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Array2[j][i] = Array1[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("  %d  ", Array2[i][j]);
        }
        printf("\n");
    }
}