#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i,c=0;
printf("\nEnter the string");
gets(str);
for(i=0;str[i]!='\0';i++)
{if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{c++; }
else continue;
}
printf("\nNumber of vowels in a string is:%d",c);
getch();
}