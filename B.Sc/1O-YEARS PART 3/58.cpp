/*determinant of a matrix*/
#include<stdio.h>
int main()
{
  int a[3][3],i,j;
  int det=0;

  printf("Enter the  elements of matrix: ");
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
           scanf("%d",&a[i][j]);

  printf("\nThe First matrix is\n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",a[i][j]);
  }

  for(i=0;i<3;i++)
      det = det + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

  printf("\nDeterminant of matrix is: %d",det);

   return 0;
}
