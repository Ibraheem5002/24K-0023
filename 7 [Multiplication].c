#include <stdio.h>
    int main()
{
    int Array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int Array2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int Result[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Result[i][j] = Array1[i][j] * Array2[i][j];
            printf("  %d  ", Result[i][j]);
        }
        printf("\n");
    }
}