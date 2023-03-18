#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],i,j,x,y,r,c,r2,c2;
	printf("Enter number of Rows of first matrix");
	scanf("%d ",&r);
	printf("Enter number of colums of first matrix");
	scanf("%d ",&c);
	
		printf("Enter number of Rows of second matrix");
	scanf("%d ",&r2);
	printf("Enter number of colums of second matrix");
	scanf("%d ",&c2);
	
	if(r<c && c<r && r2>c2 && r2<c2 )
	printf("Sorry Invalid Values");
	
	printf("Enter values for matrix A");
	for(i=0;i<=r;i++)
	for(j=0;j<=c;j++){
	
	scanf("%d ",&A[i][j]);
}
	printf("Enter values for matrix B");
	for(i=0;i<=r2;i++)
	for(j=0;j<=c2;j++){
	
	scanf("%d ",&B[i][j]);
}
		for(i=0;i<2;i++)
		{
		
	for(j=0;j<=2;j++)
	{
	
	C[i][j]=A[i][j]*B[i][j];
	printf("%d ",C[i][j]);
}
printf("\n");
}
return 0;	
}
