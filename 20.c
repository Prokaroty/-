#include<stdio.h>
int main()
{int n;
double x,y=1,z;
printf("Enter a number to get its squared root\n");
scanf("%lf",&x);
n=x+1;
if(n<=0)
{printf("\nSorry,this number ought to be a positive number\n");
printf("Please restart the program.\n");}

else
{while(x-y*y>0.0001||y*y-x>0.0001)
   { z=x/y;
     y=(z+y)/2;
    }

printf("%lf*%lf=%lf",y,y,x);}
return 0;
}