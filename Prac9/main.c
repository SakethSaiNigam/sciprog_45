#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

#define U 100

int getnumberlines(char f[U]) 
{
    FILE *e;

    e = fopen(f, "r");
    int read;
    int t = 0;

    while ((read = fgetc(e)) != EOF) 
    {
        if (read == '\n')
        {
            t++;   
        }
    }
    return t;
}

int main() 
{

    FILE *e;
    char f[U];

    printf("Enter name of File: ");
    scanf("%s", f);


    int N = getnumberlines(f);

    f = fopen(f, "r");

    int i, j;
    int **squarematrix = malloc(N * sizeof(int *));

    for (i = 0; i < N; i++) {
        squarematrix[i] = malloc(N * sizeof(int *));
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            fscanf(file, "%d", &squarematrix[i][j]);
        }
    }

    int isMSqr = isMagicSquare(squarematrix, N);

    if (isMSqr == 1)
        printf("This is a magic square\n");
    else
        printf("This not a magic square\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", squarematrix[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < N; i++)
    {
        free(squarematrix[i]);
    }
    free(squarematrix);
    fclose(e);
    
    return 0;
}