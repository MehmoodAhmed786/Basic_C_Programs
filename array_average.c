#include<stdio.h>
int main()
{

int a[10],i,j,sum;
float avg;
printf("Enter 10 numbers");
for(i=0;i<=9;i++)

   scanf(" %d ",&a[i]);

  
  
    for(i=0;i<9;i++)
    {
	
	
   
   sum=sum+a[i];

 
  
printf("sum is :%d",sum);
}
avg=sum/10.0;
printf("average is :%f",avg);

}
   

