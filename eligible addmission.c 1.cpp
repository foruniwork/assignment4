#include<stdio.h>
#include<conio.h>
int main(){
	float math_score,science_score;
	printf ("enter you math score");
	scanf("%f",&math_score);
	printf ("enter you science score");
	scanf("%f",&science_score);
	float total_score=math_score+science_score;
	if (total_score >=50){
	printf("you are eligible for adminssion");
		if (total_score >=80){
	printf("you are qualifay far a scholarship");
}
}
else
{
printf("you are not eligible for admission");
}
getch();
}
