#include<stdio.h>
#include<string.h>
int main(){
	int i,j=0,count=0,val,max,choice;
	int n=1000;
	char str[n],str2[n];
	
	printf("Enter a string:\n ");
	gets(str);
	printf("1. Count the number of vowels in the string \n2. Count both the vowels and consonants in the string \n3. Display the most frequent character in the string. \n4. Concatenate another string with the existing string. \n5. Exit the program.\n");
    scanf(" %c",&choice);
 if(choice=='1'){
 	for(i=0;str[i]!=0;i++){
 	if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U')){
 		count++;
	 }
 }
 printf("\nvowels in the string: %d",count);
 count=0;
}
if(choice=='2'){
	for(i=0;str[i]!=0;i++){
	if(((str[i]>='a') && (str[i]<='z')) || ((str[i]>='A') && (str[i]<='Z'))){	
		count++;
	}
 }
 	printf("vowels and consonants in string: %d",count);
}
{
	

count=0;
if(choice==3){
			  for(i=0; i<n; i++)  
    {
        str2[i] = 0;
    }
    i=0;
    while(str[i] != '\0')
    {
        val= (int)str[i];
        str2[val] += 1;

        i++;
    }

    max = 0;
    for(i=0; i<n; i++)
    {
        if(i!=32)
        {
        if(str2[i] > str2[max]){
            max = i;
        }
        }
    }	
		
		printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, str2[max]);	 
}
if(choice==4){

	for(i=0;str[i]!=0;i++){
    str2[j]=str[i];
    j++;
	}
	 printf("\nConcatenated string: %s", str2);
}

if(choice==5){
	
}

  return 0;
}}
