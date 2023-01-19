#include <stdio.h>
float temp(float c)
{
    float result=9.0/5.0*c+32;
    printf("Celcius to Farenhiet=%.2f",result);
}
int main() {
   float c=18;
   temp(c);

    return 0;
}