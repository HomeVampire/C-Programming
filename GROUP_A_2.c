#include<stdio.h>
int main(){
	int row, col;
	int i, j;
	printf("Enter row: ");
	scanf("%d",&row);
	printf("Enter column: ");
	scanf("%d",&col);

	int a[row][col];

	printf("Enter Matrix Elements...\n");
	for(i=0;i<row;i++){
		printf("Enter element of row no. %d...\n",i+1);
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("Your Matrix is...\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
////////////////////////////////////////////////////// Merge row and column of the matrix and put it into an 1D array
	int n=row*col; //Length og the 1D array
	int output[n];
	int k=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			output[k]=a[i][j];
			k++;
		}
	}

	printf("Your output is...\n");
	for(i=0;i<n;i++){
		printf("%d  ",output[i]);
	}

return 0;
}