#include <stdio.h>


int n_c_r(int n,int r);
int fact(int n);
int main(){
    int n,r,value;
    printf("enter two values");
    scanf("%d %d ",&n,&r);
    value=n_c_r(n,r);
    printf("combination=%d",value);
    
    int n_c_r(int n,int r);
    {
        if (n>=r)
        return fact(n)/(fact(r)*fact(n-r));
       else 
return 0;


    }


int fact(int n){
    if (n>=1)
    return n*fact(n-1);

else return 1;


}    
    
}