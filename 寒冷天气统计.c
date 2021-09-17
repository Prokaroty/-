#include<stdio.h>

int main()
{
  const int Frezzing=0;
float temperature;
int cold_days;
int all_days;      

printf("Enter the list of daily low temperatures.\n");
printf("Use Celsius,and enter q to quit\n");    
   scanf("%f",&temperature); 
while(scanf("%f",&temperature)==1)    
    {
    all_days++;
    if (temperature<Frezzing)
    cold_days++;
    }
    if(all_days !=0) 
    printf("%d days total: %.1f%% were below frezzing point.\n",all_days,100.0*(float) cold_days/all_days);
    
    if(temperature==0)
    printf("No data entered");
    return 0;
    
    
}