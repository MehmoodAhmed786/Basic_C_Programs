#include<stdio.h>
int main()
{
	int v1,v2,odd1,odd2,check;
	printf("Enter Value 1:");
	scanf(" %d",&v1);
    printf("Enter value 2:");
    scanf(" %d",&v2);
    odd1=v1%2==0;
    odd2=v2%2==0;
	check=(odd1==0 || odd2==0);
	printf("%d",check);
	return 0;
	
	
	
}
