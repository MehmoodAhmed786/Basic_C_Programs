#include<stdio.h>
int zodiacsign(int day,int month,int year){
	printf("Enter your date of birth in this format DD-MM-YYYY: ");
	scanf("%d %d %d",&day,&month,&year);
	if((month==3 && day>=20 && day<=31) || (month==4 && day<=19 && day>0)){
	printf("\nyour zodiac sign is Aries. you are very ambitious");
}
else if((month==4 && day>=20 && day<=30) || (month==5 && day<=20 && day>0)){
		printf("Your zodiac sign is Taurus. ");
}
else if((month==5 && day>=21 && day<=31) || (month==6 && day<=20 && day>0)){
	printf("\nYour zodiac sign is Gemini.");
}
else if((month==6 && day>=21 && day<=30) || (month==7 && day<=22 && day>0)){
	printf("\nYour zodiac sign is Cancer. ");	
}
else if((month==7 && day>=23 && day<=31) || (month==8 && day<=22 && day>0)){
	printf("\nYour zodiac sign is leo. ");
}
else if((month==8 && day>=23 && day<=31) || (month==9 && day<=22 && day>0)){
	printf("\nYour zodiac sign is virgin.");
}
else if((month==9 && day>=23 && day<=30) || (month==10 && day<=22 && day>0)){
	printf("\nYour zodiac sign is Libra.");
}
else if((month==10 && day>=23 && day<=31) || (month==11 && day<=21 && day>0)){
	printf("\nYour zodiac sign is scorpio");
}
else if((month==11 && day>=22 && day<=30) || (month==12 && day<=21 && day>0)){
	printf("\nyour zodiac sign is sagittarius. ");
}
else if((month==12 && day>=22 && day<=31) || (month==1 && day<=19 && day>0)){
printf("\nYour zodiac sign is Capricorn. ");	
}
else if((month==1 && day>=20 && day<=31) || (month==2 && day<=17 && day>0)){
	printf("\nYour zodiac sign is Aquarius.");
}
else if((month==2 && day>=18 && day<=29) || (month==3 && day<=19 && day>0)){
	printf("\nYour zodiac sign is Pisces. ");
}
else{
	printf("\nInvalid Date\n");
}
printf("\nWanna check zodiac sign again? Y/N ");
}
int main(){
	int day,month,year;
	char choice;
	zodiacsign(day,month,year);
	scanf(" %c",&choice);
	while(choice=='y' || choice=='Y'){
	zodiacsign(day,month,year);
	scanf(" %c",&choice);	
	}
	return 0;
}
