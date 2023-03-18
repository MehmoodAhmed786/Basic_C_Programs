#include<stdio.h>
#define N 100
int main(){
	int colA,colB,rowA,rowB,matrixA,matrixB,i,j,sum=0,k=0;
	printf("Enter number of rows for matrixA: \n");
	scanf("%d",&rowA);
	printf("Enter number of columns for matrixA: \n");
	scanf("%d",&colA);
	printf("Enter number of rows for matrixB: \n");
	scanf("%d",&rowB);
	printf("Enter number of columns for matrixB: \n");
	scanf("%d",&colB);
	int arr[rowA][colA];
	int brr[rowB][colB];
	int matrix[N][N];
	
				printf("\nEnter elements for Matrix A\n");
		for(i=0;i<rowA;i++){
			for(j=0;j<colA;j++){
				printf("Enter element for index %d%d\n",i,j);
				scanf("%d",&arr[i][j]);
			}
			printf("\n");
		}
		printf("\nEnter elements for Matrix B\n");
		for(i=0;i<rowB;i++){
			for(j=0;j<colB;j++){
				printf("Enter element for index %d%d\n",i,j);
				scanf("%d",&brr[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<rowA;i++){
			
			for(j=0;j<colB;j++){
				for(k=0;k<colA;k++){
			sum+=arr[i][k]*brr[k][j];
		}
		matrix[i][j]=sum;
		sum=0;
	}
			
			printf("\n");
			
		}
		printf("\n\nMatrixA :\n");
		for(i=0;i<rowA;i++){
			
			for(j=0;j<colA;j++){
			printf("%d ",arr[i][j]);	
			}
			printf("\n");
		}
		printf("\n\nMatrixB :\n");
		for(i=0;i<rowB;i++){
			
			for(j=0;j<colB;j++){
			printf("%d ",brr[i][j]);	
			}
			printf("\n");
		}
		printf("\n\nMultiplication Matrix :\n");
		for(i=0;i<rowA;i++){
			for(j=0;j<colB;j++){
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
	
	
	return 0;
}
