#include<stdio.h>
#define N 10
int main(){
	int i;
	int arr[N];
	for(i=1;i<=10;i++){
		printf("enter number%d :",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			printf("%d is even",arr[i]);
		}
		else{
			printf("%d is odd",arr[i]);
		}
	}
	return 0;
}
