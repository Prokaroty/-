#include<stdio.h>

int main()
{
int p;
double s,z,x,y=1,n=1;
printf("This is a program to count 'x!'");
printf("\nPlease enter 'x' to start\n");
printf("\nCaution:If x isn't an integer,please enter '0' to reset the program.\n ");
scanf("%lf",&x);
if(x>0&&(int)x==x)
 {while(x>n)
  {n++;        
  y=n*y;   
  printf("\n%.0lf!=1*...*%.0lf=%.0lf\n",n,n,y);}}
else if(x<0||(int)x!=x)
printf("I wish you know that you are supposed to enter a positive integer now ：）\nGo back to reset the program yourself.");
else
 {printf("\nIf that it isn't an integer\n");
 printf("The way the program works depends on what you want\n");
printf("First enter the decimal you want\n");
scanf("%lf",&x);
    if((int)x==x)
      printf("You are fooling me!\nThat's an integer!\nGO BACK TO RESET THE PROGRAM FOR YOURSELF!");

    else
      {printf("You entered %lf\n",x);
      printf("\nThen, if you want this decimal replaced the nearest integer\n");
      printf("enter '1' to start the program\n");
      printf("\nIf you want the decimal reminds not changed\n");
      printf("enter '0' to start\n");
      scanf("%lf",&s);
           if(s==1)
             {x=x+0.5;
              p=x;
              printf("x≈%d\n",p);
              while(p>n)
              {n++;        
               y=n*y;   
               printf("\n%.0lf!=1*...*%.0lf=%.0lf\n",n,n,y);}}

            else if(s==0)
              {p=x;
               while(p-1>n)
               {n++;        
               y=n*y;   
               printf("\n%.0lf!=1*...*%.0lf=%.0lf\n",n,n,y);}
               y=x*y;
               printf("\n%lf!=1*...*%d*%lf=%lf\n",x,p-1,x,y);}
        
            else
            printf("Do not fool me\n""There isn't another chance!");
return 0;
}}}