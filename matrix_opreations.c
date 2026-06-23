#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[10][10])
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[10][10])
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int rows, int cols, int A[10][10], int B[10][10])
{
    int i, j, sum[10][10];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatrix Addition:\n");
    displayMatrix(rows, cols, sum);
}

void multiplyMatrix(int rows, int cols, int A[10][10], int B[10][10])
{
    int i, j, k;
    int result[10][10];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < cols; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix Multiplication:\n");
    displayMatrix(rows, cols, result);
}

void transposeMatrix(int rows, int cols, int matrix[10][10])
{
    int i, j;
    int transpose[10][10];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose Matrix:\n");

    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;
    int A[10][10], B[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("\nEnter elements of Matrix A:\n");
    inputMatrix(rows, cols, A);

    printf("\nEnter elements of Matrix B:\n");
    inputMatrix(rows, cols, B);

    addMatrix(rows, cols, A, B);

    multiplyMatrix(rows, cols, A, B);

    transposeMatrix(rows, cols, A);

    return 0;
}