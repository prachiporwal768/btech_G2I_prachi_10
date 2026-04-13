#include<stdio.h>
int main()
{int a,b,r;
char op;
printf("enter first no.s");
scanf("%d ",&a);
printf("enter any operator");
scanf("%c",&op);
printf("enter second no.");
scanf("%d",&b);
switch(op)
{
	case'+':r=a+b;
	printf("addition %d",r);
	break;
	case'-':r=a-b;
	printf("subtraction %d",r);
	break;
	case'*':r=a*b;
	printf("multiplication %d",r);
	break;
}return 0;
}

