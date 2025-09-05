#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,num=2;
 clrscr();
 do
 {
 printf("%d\n",num);
 num = num + 2;
 i++;
 }
  while(i<10);
  getch();
}