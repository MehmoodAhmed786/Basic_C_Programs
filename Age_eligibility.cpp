#include<stdio.h>
int main()
{
	int age;
	printf("Enter age:");
	scanf(" %d",&age);
	(age>20 && age<25)?printf("1"):printf("0");
	return 0;
}
