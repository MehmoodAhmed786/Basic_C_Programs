#include<stdio.h>
int main(){
    int a,b,formula;
    printf("enter value of a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);
    formula = (a*a*a - b*b*b -3*a*b*a-b);
    printf("formula is %d",formula);
    
}