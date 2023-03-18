#include<stdio.h>
int main()
{
char character='c';
int i=3;
long long big=3455346;
float f=3.02;
long long longe;
scanf(" %c",&longe);
printf(" %c",longe);
printf("value of character=%c , address of character is=%u\n",character,&character);
printf("value of integer=%d , address of integer is=%u\n",i,&i);
printf("value of Long Integer=%lld , address of long Integer is=%u\n",big,&big);
printf("value of f=%f , address of f is=%u\n",f,&f);
return 0;


}
