#include <stdio.h>

int main() {
 int grade,marks;
 printf("Enter your score");
 scanf( " %d",&marks);
 if (marks>=90)
 printf("Grade= A+");
 else if(marks>=80 && marks<=89)
 printf("Grade= A");
 else if(marks>=70 && marks<=79)
 printf("Grade= B");
 else if (marks>=60 && marks<=69)
printf("Grade= C");
else if(marks>=50 && marks<=59)
printf("Grade= D");
else if(marks<50)
printf("Garde= F");
    return 0;
}