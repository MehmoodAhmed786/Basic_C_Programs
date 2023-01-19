# include<stdio.h>
int Reverse(int a)
    {
    int a1=a%100;
    int a2=a1/10;
    int a3=a%10;
    int a4=a/100;
    int a5=((a3*100)+(a2*10)+(a4*1));
    return a5;
    }
    int main()
{
    int a=Reverse(649);
    printf("REVERSED= %d",a);
    return 0;
}