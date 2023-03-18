#include<stdio.h>
int main()
{
	int dimension,i,j,sum1=0,sum2=0;
	printf("How many dimensions?");
	scanf("%d",&dimension);
	int matrix[dimension][dimension];
	for(i=0;i<dimension;i++)
	{
		for(j=0;j<dimension;j++){
		printf("Enter the value of index matrix[%d][%d]",i,j);
		scanf("%d",&matrix[i][j]);
		if(i==j)
		{
			sum1=sum1+matrix[i][j];
		}
		if(i+j==2)
		{
			sum2=sum2+matrix[i][j];
		}
	}
	printf("\n");
	}
	printf("Orignal matrix:\n");
	for(i=0;i<dimension;i++)
	{
		for(j=0;j<dimension;j++){
		printf("%d ",matrix[i][j]);
		
	}printf("\n");
	
	}
	printf("\nSum of Left Diagonal %d:\n",sum1);
	printf("\nSum of Right Diagonal %d:\n",sum2);

}

