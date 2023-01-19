#include<stdio.h>
int ages(int Umer_age,int Mehmood_age,int Hasnain_age){
if(Hasnain_age<Umer_age && Umer_age>Mehmood_age)
  {
   printf("Umer is oldest among all having age:%d",Umer_age);
  
}
  else if(Hasnain_age<Mehmood_age && Mehmood_age>Umer_age)
  
  {
  
  printf("Mehmood is oldest among all having age:%d",Mehmood_age);
      
  }

else
 {    printf("Hasnain is oldest among all having age:%d",Hasnain_age);
}

}

int main()
{
	int Umer_age;
	printf("enter Umer_age:");
	scanf("%d",&Umer_age);
   int Mehmood_age;
   printf("enter Mehmood_age:");
   scanf("%d",&Mehmood_age);
   int Hasnain_age;
   printf("enter Hasnain age:");
   scanf("%d",&Hasnain_age);
   ages(Umer_age, Mehmood_age, Hasnain_age);
   return 0;
}
