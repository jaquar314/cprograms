#include <stdlib.h>
#include <stdio.h>

#define SIZE 9

int main(int argc, char** argv) {

    /* create dynamic array of integers */
    int** darr;
    darr = malloc(sizeof(int*) * SIZE);

    /* print addresses of integer pointers in darr */
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%p, ", (*(darr + i) + j));
        }
        printf("\n");
    }

    /* free dynamic array */
    free(darr);

    return 0;
}