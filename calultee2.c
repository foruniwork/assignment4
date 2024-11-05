#include<stdio.h>
#include<conio.h>
int main(){
int units;
float bill;
printf("enter unit consumed");
scanf("%d",units);
if(units<=100)
{ 
bill=0;
 printf("no charge %f",bill); 
}
 else if(units<=200) 	
 {
 	bill=(units)*5;
 	printf("5 repees per unit %f",bill);	
 }
else if(units<=300)
{
	bill=(units)*8;
 	printf("8 repees per unit %f",bill);	
 } 
 else
 bill=(units)*10;
 printf("10 repees per unit %f",bill);
 getch();
}
