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

void multiplyMatrices( int m, int n, int p,int q,int A[m][n], int B[p][q], int result[n][p]) 
{
  for (int i = 0; i < m; i++) 
  {
    for (int j = 0; j < n; j++) 
    {
      result[i][j] = 0;
      for (int k = 0; k < n; k++) 
      {
        
        result[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  printf("Resultant matrix:\n");
  print(m,n,result);
}

int main() 
{
  int m, n, p, q;

  printf("row column for 1st: ");
  scanf("%d %d", &m, &n);

  printf("row colunn for 2: ");
  scanf("%d %d", &p, &q);
 if (n != p) 
 {
    printf("error\n");
    return 1;
  }
  int A[m][n], B[p][q], res[n][p];

  printf("Enter  elements first : \n");
    read(m,n,A);
    printf("Enter  elements second : \n");
    read(m,n,B);
  
  printf("first matrix is: \n");
    print(m,n,A);
    printf(" second matrix is: \n");
    print(m,n,B);
  multiplyMatrices(m,n,p,q,A,B,res);

   return 0;
}

