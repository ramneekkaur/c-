#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];int i,j,len,flag;
clrscr();
printf("Ener a string\n");
gets(str);
for(len=0;str[len]!='\0';len++);
for(i=0,j=len-1;i<len/2;i++,j--)
{if(str[i]!=str[j])
{flag=0;
break;}}
if(flag!=0)
{printf("It is a pallindrome");
}
else {printf("It is not a pallindrome");
}
getch();
}