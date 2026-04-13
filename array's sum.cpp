#include<stdio.h>
int main()
{int n,i,a1[n],a2[n],a3[n];
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter element of 1st array:");
for(i=0;i<n;i++)
{scanf("%d",&a1[n]);
}printf("enter element of 2nd array:\n");
for(i=0;i<n;i++)
a3[i]=a1[i]+a2[i];
printf("sum of corresponding element:\n");
for(i=0;i<n;i++)
printf("%d",a3[i]);
return 0;
}
