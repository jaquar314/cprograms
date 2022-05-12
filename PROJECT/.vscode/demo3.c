/**
 * C proogram to add two matrix using pointers.
 */

#include <stdio.h>

#define ROWS 3
#define COLS 3


/* Function declaration to input, add and print matrix */
void matrixInput(int mat[][COLS]);
void matrixPrint(int mat[][COLS]);
void matrixAdd(int a[][COLS], int b[][COLS], int c[][COLS]);


int main()
{
    int a[ROWS][COLS], b[ROWS][COLS], c[ROWS][COLS];

    // Input elements in first matrix
    printf("Enter elements in first matrix of size %dx%d: \n", ROWS, COLS);
    matrixInput(a);

    // Input element in second matrix
    printf("\nEnter elemetns in second matrix of size %dx%d: \n", ROWS, COLS);
    matrixInput(b);

    // Finc sum of both matrices and print cult
    matrixAdd(a, b, c);

    printf("\nSum of first and second matrix: \n");
    matrixPrint(c);
    

    return 0;
}



/**
 * Function to read input from user and store in matrix.
 * 
 * @mat     Two dimensional integer array to store input.
 */
void matrixInput(int mat[][COLS])
{
    int i, j;


    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // (*(mat + i) + j) is equal to &mat[i][j]
            scanf("%d", (*(mat + i) + j));
        }
    }
}



/**
 * Function to print elements of matrix on console.
 * 
 * @mat     Two dimensional integer array to print.
 */
void matrixPrint(int mat[][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // *(*(mat + i) + j) is equal to mat[i][j]
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}



/**
 * Function to add two matrices and store their cult in given c
 * matrix.
 * 
 * @a    First matrix to add.
 * @b    Second matrix to add.
 * @c     cultant matrix to store sum of a and b.
 */
void matrixAdd(int a[][COLS], int b[][COLS], int c[][COLS])
{
    int i, j;


    // Iterate over each matrix elements 
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // c[i][j] = a[i][j] + b[i][j]
            *(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }
}