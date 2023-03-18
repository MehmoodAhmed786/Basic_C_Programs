#include<stdio.h>
#include<math.h>
int main()
{
		int array[4],A,i;
	printf("Enter values of a,b,c,s");
for(i=0;i<4;i++)
{
	scanf(" %d",&array[i]);
}
 A=sqrt(array[3](array[3]-array[0])(array[3]-array[1])(array[3]-array[2]));//A = sqrt\\(s(s – a)(s – b)(s – c))
printf("Area of triangle is:%d",A);

return 0;
}
