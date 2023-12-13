#include <stdio.h>

void add(int mat1[][3], int mat2[][3], int result[][3], int rows, int columns) {
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
           *(*(result+i)+j) = *(*(mat1+i)+j) + *(*(mat2+i)+j);
        }
    }
}

void printMatrix(int matrix[][3], int rows, int columns) {
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];
    //scanf ("%d", *(n+i)+g);")
    add(matrix1, matrix2, result, 3, 3);
   
    printf("Matrix 1:\n");
    printMatrix(matrix1, 3, 3);
    
    printf("\nMatrix 2:\n");
    printMatrix(matrix2, 3, 3);
    
    printf("\nResult:\n");
    printMatrix(result, 3, 3);
    
    return 0;
}
