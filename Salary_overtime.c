#include <stdio.h>

int main() {
  int hourly=1000,hours_worked,hours=40,overtime=0,salary=0,overtime_salary=0;
   int tax;
  printf("Hours worked?");
  scanf(" %d",&hours_worked);
  if(hours_worked<=40)
  {
     salary=hours_worked*hourly ;
     salary-=tax*20/100;
      printf("salary=%d",salary);
  }
  else if(hours_worked>40)
 { 
     overtime=hours_worked-hours;
    
 
 
  salary=hours_worked*hourly;
  overtime_salary=overtime*hourly;
  
     overtime_salary*=1.5;
     
    salary+=overtime_salary;
    
     tax=salary*(20/100);
     
     salary=salary - tax;
     
    printf("salary=%d",salary);
}
    return 0;
}
