#include<stdio.h>

int main(void)
{
printf("This is a program dealing with formula\n like ax+b=c");
int a,b,c,x=1;
printf("\nPlease enter a,b,c in turn");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

while(a*x+b<=c)
{
x++;
}

if(a*x+b!=c)
printf("Sorry, this formula doesn't have an integral solution");

else
{printf("This formula has an integral solution");
printf("x=%d\n",x);}
return 0;
}