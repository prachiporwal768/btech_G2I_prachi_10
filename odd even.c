#include<stdio.h>
int main() 
{
int a,b,c,d,e,sum,percentage;
    printf("enter the value of five subjects: ");
    scanf("%d %d %d %d %d " , &a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    percentage=sum/5;
    printf("%d",percentage);
    if (percentage>90&&percentage<=100)
    
       {printf("print a");
     }
             else if
      (percentage>80&&percentage<=90)
    
       {printf ("print b");
    }
return 0;
}