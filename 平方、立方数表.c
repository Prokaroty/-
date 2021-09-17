#include<stdio.h>

int main()
{
 int num,n;
printf("This is a program to made a number sheet\n");
printf("enter the number to be the last \n");
scanf("%d",&n);

 printf("    n     n squared     n cubed\n");
 for(num =1;
     num<=n;
     num++)
 printf("%5d     %5d        %5d\n",num,num*num,num*num*num);
    return 0;
}