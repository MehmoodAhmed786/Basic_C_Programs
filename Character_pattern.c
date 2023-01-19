#include<stdio.h>
int main(){
	char a;
	int b;
	printf(" Enter a character : ");
	scanf(" %c" ,&a);
	printf("Enter number of rows :");
	scanf("%d" , &b);
	for(int i=1 ; i<=b ; i++){
		printf("\n");
		for(int j=b ; j>=i ; j--){
			printf(" %c ", a);
			     
		}
			
	}
	

}