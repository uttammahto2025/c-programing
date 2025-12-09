#include<stdio.h>
int main (){
          int a[5];
          int i;
          printf("Enter the numbers: \n");
          for(i=0;i<5;i++)
          {
                    scanf("%d",&a[i]);
          }
          int k=a[0];
          for(i=1;i<5;i++)
          {
                    if(a[i]<k)
                    {
                              k=a[i];
                    }
          }
          printf("Smallest Digit is %d",k);
}