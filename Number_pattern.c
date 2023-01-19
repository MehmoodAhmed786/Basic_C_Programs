#include<stdio.h>
int main(){
	int a;
	printf(" enter number of rows : ");
	scanf(" %d" ,&a);
	for(int i=1 ; i<=a ; i++){
		printf("\n");
		for(int j=a ; j>=i ; j--){
			printf(" %d ", j);
			
		}
			
	}
	

}