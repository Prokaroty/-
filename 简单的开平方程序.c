#include<stdio.h>
int main()
{
double x,y=1,z;
printf("Enter a number to get its square root\n");
scanf("%lf",&x);

while(x-y*y>0.0001||y*y-x>0.0001)
   { z=x/y;
     y=(z+y)/2;
    }

printf("%lf*%lf=%lf",y,y,x);
return 0;
}