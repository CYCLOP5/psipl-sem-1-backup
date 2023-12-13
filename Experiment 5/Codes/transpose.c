#include <stdio.h>

void read (int m,int n, int arr[m][n])
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter the value of arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void transpose(int m,int n,int matrix[m][n], int result[n][m]) 
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            result[j][i] = matrix[i][j];
        }
    }
}

void print(int m,int n, int arr[m][n])
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int m, n;
    printf("row column for matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter  elements first : \n");
    int ogmatrix[m][n] ;
    int result[n][m];
    read(m,n,ogmatrix);
    printf("Original matrix:\n");
    print(m,n,ogmatrix);
    transpose(m,n,ogmatrix, result);
    printf("\nTransposed matrix:\n");
    print(n,m,result);

    return 0;
}
