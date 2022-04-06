#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], m, n, i, j, t = 0;
    printf("SQUARE MATRIX\n");
    printf("Enter matrix size: ");
    scanf("%d", &m);
    printf("\nEnter elements of a:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] != b[i][j])
            {
                printf("\nMatrix is not symmetric");
                exit(0);
            }
        }
    }
    printf("matrix is symmetric");

    return 0;
}
