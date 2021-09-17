#include<stdio.h>

int main()
{
 long num;
 long sum = 0L;
 int status;
 printf("WARNING: ANY NONE-NUMBRE-CHARACTERS END THE PROGRAM\n");
printf(" \n"); 
printf("Please enter an integer to be summed.");
 printf("(press q to end):\n");

status=scanf("%ld",&num); 
 while (status==1)   
 {
 sum=sum+num;
 printf("Please enter next integer(q to end)");
 status=scanf("%ld",&num);
}
printf("Those integers sum to %ld.\n",sum);
     return 0;
}