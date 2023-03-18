#include<stdio.h>
int main()
{

int A[10][10],transpose[10][10],r,i,j;
int c;
printf("Enter Dimensions of square matrix");
scanf("%d %d ",&r,&c);

for(i=0;i<r;i++)

for(j=0;j<c;j++){

printf("Enter value for index %d%d",i,j);
scanf("%d ",&A[i][j]);
}

printf("Original Matrix \n");
for(i=0;i<r;i++)

for(j=0;j<c;j++){

printf("%d  ",A[i][j]);
if(j==c-1)
printf("\n");
}

 for (int i = 0; i < r; i++)
  for (int j = 0; j < c; j++) {
    transpose[j][i] = A[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; i++)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;


}
