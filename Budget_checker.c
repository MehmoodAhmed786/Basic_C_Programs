#include<stdio.h>
int calculate(int spendings)
{
	
}
int main(){
	int spendings,budget,i,totalspent=0;
	char choice;
	
printf("Enter budget: ");
scanf("%d",&budget);
do{
for(i=0; ;i++){
	printf("Enter spending: ");
	scanf("%d",&spendings);
	printf("do you have any expense to enter? Y/N");
	scanf(" %c",&choice);
	totalspent+=spendings;
	if(choice=='n' || choice=='N')
	{
		break;
	}
	
}

}while(choice=='y' || choice=='Y');
	

	
	printf("Your total spendings are: %d",totalspent);
	if(totalspent>budget){
		printf("\nyou have spent more than you have planned");
	}
	else if(totalspent<budget)
	{
		printf("\nyou have spent less than you have planned");
	}
	else if(totalspent==budget)
	{
		printf("\nyou have spent same as you have planned");
	}
	return 0;
}
