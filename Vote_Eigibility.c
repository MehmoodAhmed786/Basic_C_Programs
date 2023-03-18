#include <stdio.h>

int main() {
   int legal_age=18,age;
   
   printf("Enter your age");
   scanf(" %d",&age);
   if(age<legal_age)
   {
       printf("your are not eligible to give vote");
   }
else if(age>=legal_age)
{
    printf("you are eligible to give vote ");
    
}
    return 0;
}