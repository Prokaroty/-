#include<stdio.h>

int main(void)
{
printf("This is a program dealing with formula\n like ax+b=c");
double a,b,c;
double x;
printf("\nPlease enter a,b,c in turn\n");
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
x=(c-b)/a;
printf("x=%.3lf",x);
return 0;
}