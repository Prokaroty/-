#include<stdio.h>
#define PRAISE "You are an extrodinary being"
int main(void)
{
    char name [40];
    printf("What's your name ?");
    scanf("%s",name);
    printf("Hello %s ,%s \n",name,PRAISE);
    printf("\rGee!\n");
       return 0;
}
