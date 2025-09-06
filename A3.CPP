#include<stdio.h>
#include<conio.h>

 void main()
{
 int i = 0 , count = 0 ;
 clrscr();
 printf("first 10 even numbers \n");

 while(count<=10)
 {
  printf("%d\n",i);

  i = i+2 ;
  count++ ;
 }
 getch();
}