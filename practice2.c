#include<stdio.h>
int main()
{
int j,k;
int x=1;
printf("Enter any number:");
scanf("%d ",&k);

for(int i=1; i<=k; i++){


	for ( j=1; j<=k-x; j++)
	{
	
		printf("* ");
}

	printf("\n");
	x=x+1;

}
}
