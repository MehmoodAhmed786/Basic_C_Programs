#include<stdio.h>
int main()
{
	int number,mask,check,nthbit;
	printf("Enter value");
	scanf(" %d",&number);
	printf("Enter value for bits");
	scanf(" %d",&nthbit);
	mask=nthbit<<1;
	check=(number & mask)>>nthbit;
	printf("%d",check);
	return 0;
}
