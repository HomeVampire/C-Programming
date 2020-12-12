#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int a[10][10], b[10][10], mul[10][10];
 
  printf("Enter the number of rows and columns of first matrix");
  scanf("%d%d", &m, &n);
  printf("\n Enter the elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &a[c][d]);
 
  printf("Enter the number of rows and columns of second matrix");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("\nMatrices with entered orders can't be multiplied with each other.");
  else
  {
    printf("\nEnter the elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &b[c][d]);
 
    for (c = 0; c < m; c++) 
	{
      for (d = 0; d < q; d++) 
	  {
        for (k = 0; k < p; k++) 
		{
          sum = sum + a[c][k]*b[k][d];
        }
 
        mul[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", mul[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}
