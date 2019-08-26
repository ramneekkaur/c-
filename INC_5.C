#include<stdio.h>
#include<conio.h>
void main()
{
char text[40];
clrscr();
puts("Enter a line of text");
gets("%s",&text);
puts("%s",&text);
getch();
}