#include<stdio.h>
int main(){
	int a;
	printf("Enter a number : ");
	scanf("%d" , &a);
	for(int i=1 ; i<=a ; i++){
		for(int b=1 ; b<=a ; b++){
			if(b+i<=a)
			{printf(" ");
		}
		else {printf("*");
		}
			}
		
		printf("\n");
	}}