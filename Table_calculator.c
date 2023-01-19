#include<stdio.h>
void print_table(int n);
int main(){
	int n;
	char answer;
print_table(n);
do{
	printf("\nDo You want to print another table Y/N ?\n");
	scanf(" %c",&answer);
	if(answer=='Y' || answer=='y'){
		print_table(n);
		}
		else if (answer=='N' || answer=='n'){
		
		printf("\nThanks you");
		break;
	}
		else{
		printf("invalid output");
		}
		
	}while(answer);
	
}



void print_table(int n){
int a;
int i;
   printf("Enter a number : ");
   scanf(" %d",&n);
   for(i=1;i<=10;i++){
     printf("\n%d * %d = %d",n , i , n*i);
}
}
