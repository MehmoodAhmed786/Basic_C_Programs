#include<stdio.h>
#include<math.h>
int main()
{
	
	int array[4],d,i;
	printf("Enter values of x1,x2,y1,y2");
for(i=0;i<4;i++)
{
	scanf(" %d",&array[i]);
}
	d=sqrt((array[1]-array[0])^2+(array[3]-array[2])^2);//d = sqrt((x2 – x1)^2 + (y2 – y1)^2)
	printf("%d",d);
	return 0;
	
}
