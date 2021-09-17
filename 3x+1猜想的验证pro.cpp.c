#include<stdio.h>
int main(void)
{
int x=0;                   //定义运算次数x
long long int num,NUM;         //定义可以进行大数运算的数据num
printf("Enter a number to test the conjecture of 3x+1\n");
scanf("%lld",&num);        //输入数据num
getchar();                 //清除空格字符，防止错误循环

if(num<=0)                 //第一种：如果数据不是正整数
{while(num<=0)             //循环至输入正确数字
{printf("No correct data entered!\nPLEASE ENTER AGAIN!\n");
scanf("%lld",&num);
getchar();}
NUM=num;                   //保留原始数据
while (num!=1)             //该步是复制下方
{if(num%2!=0) 
   num=3*num+1;            //对奇数有3x+1 
   else          
   x++;   
   num=num/2;              //对偶数有x/2
   printf("%lld\n",num);}}

else
NUM=num;                   //保留原始数据
while (num!=1)             //第二种：数据格式正确，进入计算
{if(num%2!=0)              //如果num是奇数
   num=3*num+1;            //对奇数有3x+1
   else                    //如果num是偶数
   num=num/2;              //对偶数有x/2
   x++;                    //每进行一次运算次数加一
   printf("%lld\n",num);}  //输出每次运算后中间值
   
   printf("It takes %d times for %lld to enter the 4、2、1 loop(if it's bigger than 2)\n",x,NUM);
   printf("Now, you've learned that every number end up with 1 through this algorithm!");
   return 0;      //结束
}