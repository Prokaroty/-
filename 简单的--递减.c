#include<stdio.h>
#define MAX 100
int main(void)
{
    int COUNT=MAX+1;
    while(--COUNT>0)
    {
    printf("%d bottles of spring water on the wall\n"
    "%d bottles of spring water !!\n",COUNT,COUNT);
    printf("Take one down and pass it around,\n"
    "%d bottles os spring water left!!!\n",COUNT-1);
printf("   \n");
} return 0;
}