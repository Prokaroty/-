#include<stdio.h>
#define squares 64
int main(void)
{
    int count =1;
    const double crop=2E16;
    double current,total;
    printf("square    grains        total    ");
    printf("   fraction of\n");
    printf("          added        grains    ");
    printf("   world total\n");
    total=current=1;
    printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/crop);
   while (count<squares)
    {
   count=count+1;
current=2*current;
total=total+current;
  printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/crop);

    }
    printf("That's all");
       return 0;
}
    