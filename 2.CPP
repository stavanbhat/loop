#include<stdio.h>
#include<conio.h>
void main()
{
 int i = 1 , count = 0;
 clrscr();
 do
 {
 printf("%d\n",i);
 i = i+2 ;
 count++ ;
 }
 while(count<10);
 getch();
 }