#include<stdio.h>
#include<time.h>
void pause()
{   int b;
    b=0;
    while(b<8000000)
        //延时
    {
        b++;
        printf("");
    }
}
void clear()
{   int c=0;
    while(c<=30)
    {   printf("\n");
        c++;
    }
}
int main()
{   int aw,points=0;
    clock_t start,end;
    printf("**********little game starts**********");
    printf("\nenter the number where you can survive the arrows\n");
    printf("\n请在看到箭头后迅速输入没有箭头的列数，立刻按’Enter’进行下一轮。时间和分数都合格者胜出\n\n");
    getchar();
    start= time(NULL);
    printf("1     2     3     4     5     6     7    \n");
    pause();
    printf("↓           ↓     ↓     ↓           ↓\n");
    scanf("%d",&aw);
    if(aw==2||aw==6) points++;
    pause();
    printf("      ↓           ↓     ↓           ↓\n");
    scanf("%d",&aw);
    if(aw==1||aw==3||aw==6) points++;
    pause();
    printf("↓           ↓     ↓           ↓     ↓\n");
    scanf("%d",&aw);
    if(aw==2||aw==5) points++;
    pause();
    printf("↓           ↓           ↓     ↓     ↓\n");
    scanf("%d",&aw);
    if(aw==2||aw==4) points++;
    pause();
    printf("      ↓     ↓           ↓     ↓      \n");
    scanf("%d",&aw);
    if(aw==1||aw==4||aw==7) points++;
    pause();
    printf("↓     ↓     ↓     ↓     ↓           ↓\n");
    scanf("%d",&aw);
    if(aw==6) points++;
    pause();
    printf("      ↓     ↓     ↓           ↓     ↓\n");
    scanf("%d",&aw);
    if(aw==1||aw==5) points++;
    pause();
    printf("↓     ↓                 ↓     ↓      \n");
    scanf("%d",&aw);
    if(aw==3||aw==4||aw==7) points++;
    pause();
    printf("↓     ↓           ↓           ↓     ↓\n");
    scanf("%d",&aw);
    if(aw==3||aw==5) points++;
    pause();
    printf("↓           ↓     ↓           ↓      \n");
    scanf("%d",&aw);
    if(aw==2||aw==7||aw==5) points++;
    pause();
    printf("      ↓     ↓     ↓     ↓     ↓      \n");
    scanf("%d",&aw);
    if(aw==1||aw==7) points++;
    pause();
    printf("↓     ↓           ↓     ↓     ↓     ↓\n");
    scanf("%d",&aw);
    if(aw==3) points++;
    pause();
    printf("      ↓                 ↓           ↓\n");
    scanf("%d",&aw);
    if(aw==1||aw==3||aw==4||aw==6) points++;
    pause();
    printf("↓           ↓                 ↓     ↓\n");
    scanf("%d",&aw);
    if(aw==2||aw==4||aw==5) points++;
    pause();
    printf("↓           ↓     ↓     ↓            \n");
    scanf("%d",&aw);
    if(aw==2||aw==6||aw==7) points++;
    pause();
    printf("            ↓           ↓     ↓     ↓\n");
    scanf("%d",&aw);
    if(aw==2||aw==1||aw==4) points++;
    pause();
    printf("↓           ↓     ↓     ↓           ↓\n");
    scanf("%d",&aw);
    if(aw==2||aw==6) points++;
    pause();
    printf("      ↓     ↓           ↓     ↓      \n");
    scanf("%d",&aw);
    if(aw==1||aw==4||aw==7) points++;
    pause();
    printf("↓     ↓           ↓     ↓     ↓     ↓\n");
    scanf("%d",&aw);
    if(aw==3) points++;
    end=time(NULL);
    printf("You escape %d arrows",aw);
    printf("You use %.1f seconds",difftime(end,start));
    if(points>15 && difftime(end,start)<28)printf("congratulations!!\n\nYou win");
    else printf("You fail the little game\n\nTry again if you want");

    return 0;
}