#include<stdio.h>
int main(){
	int x;
printf(" enter a number : ");
scanf("%d" , &x);
    float f=1;
    float sum=0;
    for(float i=1; i<=x; i++){
    	{f=f*(1/i);
    	sum+=f;
    	printf("1/%.2f! = %.2f\n" , i , f);
    	
		}
}
		printf("The sum of factorial of number %d is : %.2f",x, sum);
    	
	
	
}