#include<stdio.h>

int main()
{
   int num;
scanf("%d",&num);
   while (num!=1) 
{
   if(num%2!=0) //如果num是奇数
   num=3*num+1;  //对奇数有3x+1
   else         
   num=num/2;    //对偶数有x/2
   printf("%d\n",num);

}   
    return 0;
}