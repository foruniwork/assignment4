#include<stdio.h>
#include<conio.h>
void main(){
	int total_amount,withdraw_amount,withdraw_permit;
	printf("enter your total amount:\n=>");
	scanf("%d",&total_amount);
	printf("enter amount you want to withdraw:\n=> ");
	scanf("%d",&withdraw_amount);

	if(withdraw_amount<=total_amount)
	{
		if(withdraw_amount>=1000)
		{
		printf("Do you have a special withdrawal permit (Yes = / No = 0)?\n=>");
		scanf("%d",& withdraw_permit);
		if(withdraw_permit == 1)
		{
		printf("%d withdraw sucssesfully", withdraw_amount);		
		}
		else
		{
			printf("withdraw permit not grander");
		}
		}
		else
		{
			printf("%d sucssesfully withdraw", withdraw_amount);	
		}
	}
	else
	{
		printf("you have no enough money");
		getch();
	}
}
