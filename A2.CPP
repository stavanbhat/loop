#include<stdio.h>
#include<conio.h>

 void main()
{
 int i = 1 , count = 1 ;
 clrscr();
 printf("first ten odd numbers \n");

 while(count<=10)
 {
 printf("%d\n",i);
 i = i+2;
 count++ ;
 }
 getch();
}