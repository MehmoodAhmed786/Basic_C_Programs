#include<stdio.h>
int main()
{
int j,k;
int x=1;
char b='A';
printf("Enter any number:");
scanf("%d",&k);

for(int i=1; i<=k; i++){


	for ( j=1; j<=k-x; j++)
	{
	
		printf("%c",b++);
}

	printf("\n");
	x=x+1;

}
}
