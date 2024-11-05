#include<stdio.h>
#include<conio.h>
int main(){
	int days;
	printf("enter the number(1-7)");
	scanf("%d",&days);
	switch (days)
	{
		case 1:
			printf("monday\n");
			break;
			case 2:
			printf("Tuesday\n");
			break;
			case 3:
			printf("Wednesday\n");
			break;
			case 4:
			printf("Thursday\n");
			break;
			case 5:
			printf("Firday\n");
			break;
			case 6:
			printf("Saturday\n");
			break;
			case 7:
			printf("Sunday\n");
			break;
	}
	getch();
	}
