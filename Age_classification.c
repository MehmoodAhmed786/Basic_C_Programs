#include<stdio.h>
int main()
{
	float age;
	printf("Enter your age");
	scanf(" %f",&age);
	
	if (age>=0 && age<=1.5)
	{
	
printf("Baby");
}

	else if(age>=2 && age<=3)
{

printf("Toddler");
}

	else if(age>=4 && age<=12)
{

printf("Child");
}
	else if(age>=13 && age<=19)
{

	printf("Toddler");
}
	else if(age>=20 && age<=60)
{

	printf("Adult");
}
	else if(age>=60)
{

	printf("Senior CItizen");
}
}
