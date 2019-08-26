#include<stdio.h>
#include<conio.h>
void main()
{
float F,C,F1,C1;   int T;
clrscr();
printf("\nEnter the Fahrenheit temperature");
scanf("%f",&F);
printf("\nEnter the Centigrate temperature");
scanf("%f",&C);

printf("Enter '1' for the conversion of Fahrenheit temperature to Centigrate temperature or enter '2' for the conversion of Centigrate temperature to Fahrenheit Temperature");
scanf("%d",&T);

switch(T)
{case 1:C1=(F-32)*0.555;
	printf("New Centigrate Temperature is%f",C1);
	break;
case 2:F1=C*1.8+32;
       printf("New Fahrenheit Temperature is%f",F1);
       break;
default:printf("Enter '1' or '2' only");
	break;
	}

	getch();
	}