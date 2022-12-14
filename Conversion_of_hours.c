# include<stdio.h>
int main()
{
int hours,one_hour,one_minute,hours_into_minutes,hours_into_seconds;
hours=3;
one_hour=60; //minutes
one_minute=60; //seconds
hours_into_minutes=hours*one_hour;
hours_into_seconds=hours*one_hour*one_minute;
printf("hours_into_minutes %d",hours_into_minutes);
printf("\nhours_into_seconds %d",hours_into_seconds);
return 0;
}