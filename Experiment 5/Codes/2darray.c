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

void addMatrice(int m, int n ,int arr1[m][n],int arr2[m][n],int res[m][n])
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("result: \n");
    print(m,n,res);
}

void subtractMatrix(int m, int n ,int arr1[m][n],int arr2[m][n],int res[m][n])
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            res[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    printf("result: \n");
    print(m,n,res);
}

int main()
{
    int m,n;
    printf("  rows: ");
    scanf("%d",&m);
    printf("  columns: ");
    scanf("%d",&n);
    int arr1[m][n],arr2[m][n],res[m][n];
    printf("Enter  elements first : \n");
    read(m,n,arr1);
    printf("Enter  elements second : \n");
    read(m,n,arr2);
    printf("first matrix is: \n");
    print(m,n,arr1);
    printf(" second matrix is: \n");
    print(m,n,arr2);
    printf("1. Add\n2. Subtract\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("addition of matrix is: \n");
                addMatrice(m,n,arr1,arr2,res);
                break;
        case 2:printf("subtraction of matrix is: \n");
                subtractMatrix(m,n,arr1,arr2,res);
                break;
        default: printf("Invalid choice");
    }
    
    return 0;
}