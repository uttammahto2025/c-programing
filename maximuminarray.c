#include<stdio.h>
int main (){
          int a[5];
          int i;
          printf("Enter the numbers: ");
          for(i=0;i<5;i++)
          {
                    scanf("%d",&a[i]);
          }
          int k=a[0];
          for(i=0;i<5;i++){
                    if(a[i+1]>k){
                              k=a[i+1];
                    }
          }
          printf("largest=%d",k);
}