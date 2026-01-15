#include<stdio.h>
#include<math.h>
int main(){
          int a=0,b,c,d,r1,r2;
          scanf("%d%d%d",&a,&b,&c);
          d=(b*b)-4*a*c;
          // printf("%d",d);
          if(a!=0){
                    if (d>0)
                    {
                     r1=-(b+sqrt(d))/2*a;
                    r2=-b-sqrt(d)/2*a;
                    printf("%d\t",r1);
                    printf("%d",r2);
                    }
                    if (d==0)
                    {
                        r1=-b/2*a;
                        printf("%d",r1);
                    }
                    if (d<0)
                    {
                            r1=-b/2*a;
                            r2=sqrt(-d)/2*a;
                            printf("%d\t",r1);
                            printf("%di",r2);
                    }
                    
                    
          }
          else
          printf("not a quadratic equation.");
          return 0;
}
