#include <stdio.h>
#define N 15
int main()
{
    int arr[N],x=0,i, j, k;
      	
       
       
       for(i=1;i<=15;i++)
            {
	      printf("NUMBER%d : ",i);
	      scanf("%d",&arr[i]);
	    }
    printf("\nunique elements in the array are: \n");
    for(i=1; i<=15; i++)
    {
        x=0;
        for(j=0,k=15; j<k+1; j++)
        {
            
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 x++;
               }
             }
        }
       if(x==0)
        {
          printf("%d ",arr[i]);
        }
    }
       printf("\n");
       return 0;
}
