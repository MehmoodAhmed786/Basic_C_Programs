#include<stdio.h>
int main(){
	int i,max=0,min,sum;
	float avg;
	int arr[10];
	for(i=1;i<=10;i++){
	
	printf("enter marks 0f student %d: ",i);
	scanf("%d",&arr[i]);
	sum+=arr[i];	
}
avg=(float)sum/10;

for(i=1;i<=10;i++){
	if(arr[i]>max){
		max=arr[i];
	}
}
for(i=1;i<=10;i++){
	if(min>arr[i]){
		min=arr[i];
	}
}
printf("average is: %.2f\n",avg);
printf("maximum number is %d\n",max);
printf("minimum number is %d\n",min);

}
