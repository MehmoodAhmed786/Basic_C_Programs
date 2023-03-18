#include<stdio.h>
int main(){
	int chocolates,containers,boxes,rem1,rem2;
	printf("Enter number of chocolates: ");
	scanf("%d",&chocolates);
	boxes=chocolates/22;
	containers=boxes/55;
	rem1=chocolates%22;
	rem2=boxes%55;
	printf("The quantity of containers and boxes needed to ship the chocolates: \ncontainers: %d\nBoxes: %d",containers,boxes);
	if(rem1!=0){
		printf("\nExtra chocolates: %d",rem1);
	}
	if(rem2!=0){
		printf("\nExtra boxes: %d",rem2);
	}
}
