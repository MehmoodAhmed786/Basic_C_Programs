# include<stdio.h>
int main()
{
int seconds,one_minute,one_hour,one_day,minutes_from_seconds,hours_from_seconds,days_from_seconds;
seconds=86400;
one_minute=60; //seconds
one_hour=60; //minutes
one_day=24; //hours
minutes_from_seconds=seconds/one_minute;
hours_from_seconds=seconds/one_minute/one_hour;
days_from_seconds=seconds/one_minute/one_hour/one_day;
printf("seconds_into_minutes_%d",minutes_from_seconds);
printf("\nseconds_into_hours_%d",hours_from_seconds);
printf("\nseconds_into_days_%d",days_from_seconds);
return 0;
}