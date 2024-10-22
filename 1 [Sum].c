#include <stdio.h>
    int main ()
{
    int size;
    printf("input your size of square matrix: ");
    scanf("%d", &size);
    // assuming +ve integer entered.

    int Matrix[size][size];
    int Sum = 0;

    printf("input your data: \n");
    for (int i = 0; i < size; i++)
    {
        printf("next row: \n");
        
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        Sum += Matrix[i][i];
    }
    
    printf("sum of diagonol elements: %d", Sum);
}