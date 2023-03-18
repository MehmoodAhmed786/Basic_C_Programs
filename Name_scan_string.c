#include<stdio.h>
int main()
{

char str[100];
printf("Enter your name\n");
//scanf("%s",&str);
gets(str);
printf("Your name is:\n%s",str);
printf("\n");
return 0;
}
