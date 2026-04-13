#include<stdio.h>
#include<conio.h>
int main()
{int x;
int y;
int z;
int sum;
int average;
printf("write  three no.");
scanf("%d %d %d",&x,y,z);
sum =x+y+z;
average=sum/3;

printf("the average of the three numbers is:%2f\n",average);
getch();
}
