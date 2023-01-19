#include<stdio.h>
int main()
{
	int  n1 , n2 , sum;
	int *p1 , *p2;
	
	 p1=&n1;
     p2=&n2;

		printf("Enter two real number: ");
		scanf("%d%d\n",p1,p2);
  
	
	sum= *p1+*p2 ;
	printf("Sum of real numbers is %d ",sum);
	return 0;
}
