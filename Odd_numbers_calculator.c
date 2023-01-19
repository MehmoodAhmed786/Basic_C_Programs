#include<stdio.h>
int main()
{
	int a,b,c,d,i;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	for (i=a;i<=b;i++)
	{
		if(i==1||i==0)
		continue;
		c=1;
		for(d=2;d<=i/2;++d)
	{
		if(i%d==0){
			c=0;
			break;
		}
	}
	if(c==1)
	printf("\n%d",i);
	}
}
	
