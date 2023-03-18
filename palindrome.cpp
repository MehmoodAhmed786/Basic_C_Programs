#include<stdio.h>
#include<string.h>

void pel(char str[])
{
int j=0,i;	
char str2[100]={0};
for(i=strlen(str)-1;i>=0;i--)
{
str2[j]=str[i];
j++;
}
str2[j]='\0';
if(strcmp(str,str2)==0)
{
printf("The given string is Palindrome\n");
}
else
{
printf("The given string is not Palindrome\n");
}		
}
int main()
{

char str1[100];
printf("Enter a string to check if it's' palindrome or not\n");
gets(str1);
pel(str1);
}

