#include<stdio.h>

int main()
{
    double x=0,n,y;
    y=x*x*x+2*x*x+x+3;
    while(y>=0)
    {
    x+=-0.000001;
     y=x*x*x+2*x*x+x+3;   
    printf("%lf\n",x);
    }
printf("x=%lf",x);
}