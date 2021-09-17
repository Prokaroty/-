#include<stdio.h>
#define pie 3.1416
int main()
{
    int x=0,n;
    long double y=pie*pie/6,sum=0;
    printf("Hello!Nice to meet you today!\n");
    printf("This is a program to test the famous Basel Problem\n");
    printf("\nif you want to have a try by yourself\n");
    printf("you are welcomed to enter a certain number 'x' to\nbe the last 1/x^2\n");
    printf("\nbut if you want to see what it takes to let the\ndifference between 'sum' and 'pie^2/6' smaller than 0.001 ,");
    printf("just enter 'a' to start the program\n");
    scanf("%d",&n);
    
    if(n!=0)  
    {printf("\nx      sum              difference\n");
      while(x<n)
      {x++;
      sum=sum+(double)1/x/x;
      y=pie*pie/6-sum;
      printf("%d      %llf         %llf\n",x,sum,y);}
     printf("\npi*pi/6 - 1/1*1+1/2*2+...+1/%d*%d ≈ %lf",x,x,y);}
   
    else     
    { printf("\nx      sum              difference\n");
    while(y>0.001)
    {x++;
    y=pie*pie/6-sum;
    sum=(double)1/x/x+sum;
    printf("%d      %f         %f\n",x,sum,y);}
    printf("\n1/1*1+1/2*2+...+1/%d*%d=%f≈pi*pi/6≈1.64494",x,x,sum);}
    
    printf("\n\nHey! Try again if you want to learn more about it.\n");
    return 0;
} 