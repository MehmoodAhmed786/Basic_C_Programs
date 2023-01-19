# include<stdio.h>
 float angles(float first_angle, float second_angle)
 {
 float third_angle=180-(first_angle+second_angle);
 return third_angle;
 }
 float main()
 {
    float first_angle=50.0;
     float second_angle=80.0;
     float third_angle;
     third_angle=angles(first_angle,second_angle);
     printf("Third angle=%.2f",third_angle);
     
 }