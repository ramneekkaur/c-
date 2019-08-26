
#include<conio.h>
void main()
{int a,b, choice,d;
float c;
clrscr();
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("\n1. Addition");
printf("\n2. Subtraction");
printf("\n3. Multiplication");
printf("\n4. Divi9dion");
printf("\n5. Modulus");
printf("\nChoose the operation\n");
scanf("%d",&choice);

switch(choice)
{
case 1: c=a+b;
	printf("The sum of 2 numbers is%f\n",c);
	break;

case 2: c=a-b;
	printf("Difference is %f\n",c);
	break;

case 3: c=(float)a*b;
	printf("Multiplication is %f\n",c);
	break;

case 4: c=(float)a/b;
	printf("Division is %f\n",c);
	break;

case 5: d=a%b;
	printf("Modulus is %d\n",d);
	break;

default: printf("Invalid choice\n");
	 break;
     }
getch();
}



