#include <stdio.h>
int main (){

          int a[237][349],b[12][12];
          int i;
          int j;
          int d[3][3];
          printf("Enter the first matrix ");
          for (i=0;i<2;i++)
          {
                    for(j=0;j<2;j++)
                    {
                    scanf("%d",&a[i][j]);
                    }
          }
          printf("matrix a\n");
          for (i=0;i<2;i++)
          {
                    for(j=0;j<2;j++){
                              printf("%d\t",a[i][j]);
                    }
                    printf("\n");
          }
          printf("Enter second matrix ");
           for (i=0;i<2;i++)
          {
                    for(j=0;j<2;j++)
                    {
                    scanf("%d",&b[i][j]);
          }
          
}
          printf("matrix b\n");
          for (i=0;i<2;i++)
          {
                    for(j=0;j<2;j++){
          printf("%d\t",b[i][j]);
          }
          printf("\n");
}

for (i=0;i<2;i++)
{
          for(j=0;j<2;j++)
          {
                    d[i][j]=a[i][j]+b[i][j];
          }
}
printf("sum of matrix\n");
for (i=0;i<2;i++)
{
          for(j=0;j<2;j++){
                    printf("%d\b",d[i][j]);
          }
          printf("\n");
}
}
