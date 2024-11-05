#include<stdio.h>
#include<conio.h>
int main(){
	float Science_marks,Math_marks,English_marks,average;
	printf("enter first subject marks");
	scanf("%f",&Science_marks);
	printf("enter second subject marks");
	scanf("%f",&Math_marks);
		printf("enter third subject marks");
	scanf("%f",&English_marks);
	average=(Science_marks+Math_marks+English_marks)/3;
	printf("averge%f",average);
	if (average<50)
	{
		printf("student fail");
	}
if (average<75)	 
{ 
printf("student get 'A'grade");
}
if(average >=50&& average<=75)
{
printf("student get 'B' garde");	
}
getch();
}
