#include <stdio.h>



void swap(int *num1, int *num2){



printf("Enter two numbers to swap ");
scanf("%d%d",num1,num2);
*num1=*num1+*num2;
*num2=*num1-*num2;
*num1=*num1-*num2;
}
int main()
{
    int num1, num2;
    swap(&num1, &num2);

    printf("After swapping in main \n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    return 0;
}

