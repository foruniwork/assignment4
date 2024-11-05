#include<stdio.h>
#include<conio.h>
int main()
{
	float PurchaseAmount;
	char Member;
	printf("enter the purchase amount");                 
	scanf("%f",PurchaseAmount);
	if(PurchaseAmount>= 2000)
	{
		printf("are you a member? (Y/N)");
		scanf("%c",&Member);
		if (Member == 'Y'|| Member == 'Y')
		{
			printf("Discount: 20%%");
			printf("Final amount: %f",PurchaseAmount*0.8);
		}
		else
		{
	        printf("Discount: 10%%");
			printf("Final amount: %f",PurchaseAmount*0.9);
		}
	}
	else
	{ 
	        printf(" No discount aplication \n");
			printf("Final amount: %f",PurchaseAmount*0.9);
	} getch();
	}
