#include <stdio.h>
    int main()
{
    int Array[3][3] = {{1,2,3},{4,7,6}};
    int Max = -1;
    int X;
    int Y;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Max < Array[i][j])
            {
                Max = Array[i][j];
                X = i;
                Y = j;
            }
        }
    }
    printf("Max: %d. X: %d. Y: %d", Max, X, Y);
}