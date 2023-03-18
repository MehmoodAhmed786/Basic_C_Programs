#include <stdio.h>

int main() {
    int n,i,j,k=1;
    int x,y,z;
    
    printf("Enter no of rows:");
    scanf("%d",&n);
    printf("\nFirst pattern: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    printf("\n");
    printf("\nSecond pattern: \n");
    for(i=1;i<=n;i++){
    	x=0;
    	y=1;
        for(j=1;j<=i;j++){
        	z=x+y;
            printf("%d ",x);
            
            x=y;
            y=z;
            z=x+y;
        }
        printf("\n");
    }
    printf("\n");
    printf("\nThird pattern: \n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",'A'-1 + i);
        }
        printf("\n");
    }

    return 0;
	
}
