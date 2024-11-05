#include<stdio.h>
#include<conio.h>
void main(){
int tex;
float income;
printf("enter the tex");
scanf("%d",&tex);
if(income <=250000){
printf("no tex %f",income);
}
else if(income >=250001 &&income <=500000)
{
 tex=income*0.05;
}
else if(income >=500001 &&income <=1000000)
{
 tex=income*0.10;
}
else if(income <=1000001)
{
 tex=income*0.15;
}
getch();
}
