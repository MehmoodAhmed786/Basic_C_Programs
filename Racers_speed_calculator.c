# include<stdio.h>
int main()
{

float distance_ali= 35.00;
float distance_haider=18.00;
float meter_ali=distance_ali*1000.00;
float meter_haider=distance_haider*1000.00;

float time_hours_ali=3.00;
float time_minutes_ali=39.00;
float time_hours_haider=2;
float time_minutes_haider=12;

float time_seconds_ali= (time_hours_ali*3600) + (time_minutes_ali*60);
float time_seconds_haider= (time_hours_haider*3600) + (time_minutes_haider*60);

float speed_ali=meter_ali/time_seconds_ali;
float speed_haider=meter_haider/time_seconds_haider;

printf("Speed of Ali:%.2f m/s",speed_ali);
printf("\nSpeed of Haider:%.2f m/s",speed_haider);

return 0;
}