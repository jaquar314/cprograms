<<<<<<< HEAD
 #include <stdio.h>
int main()
{
    int a[10][10], b[10][10], m, n, i, j, c[10][10]; 
    printf("\n enter the range of the matrix :\n");
    scanf("%d %d", &m, &n);
    printf("\n enter the elements");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("ENTER THE SECOND MATRIX:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    printf("the addition of the matrix is:");
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d", c[i][j]);
        printf("\n");
    }

    return 0;
=======
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], m, n, i, j, c[10][10];
    printf("\n enter the range of the matrix :\n");
    scanf("%d %d", &m, &n);
    printf("\n enter the elements");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("ENTER THE SECOND MATRIX:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    printf("the addition of the matrix is:");
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d", c[i][j]);
        printf("\n");
    }

    return 0;
>>>>>>> eb87f9ddc6fb1bb5b52e956a3fcd7fcd7e9c7820
}