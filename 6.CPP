#include<stdio.h>
#include<conio.h>
void main()
{
 int i = 0, n;

 clrscr();
 printf("Enter value of n");
 scanf("%d",& n);
 do
 {
 printf("%d\n",i);
 i = i+2;
 }
 while(i<=n);
 getch();
 }