#include<stdio.h>
#include<conio.h>
void main(){
	int age,weight;
	printf("enter your age");
	scanf("%d",&age);
	printf("enter your weight");
	scanf("%d",&weight);
	if(age>=18 && age<=65){
		if(weight<=50){
			printf("you are eligible to donate blood!");
		}
		else{
			printf("you are not eligible due to your weight!");
		}
	}
	else{
		printf("you are not eligible due to your age!");
	}
	
	
}
