#include<stdio.h>
#include<conio.h>

	int main()
{
 int i = 1,n , sum = 0;
 clrscr();

 printf("Enter value of n");
 scanf("%d",&n);

	while(i<=n)
 {
 i = i+ 2;
 sum = sum +i;

 }
  printf("sum  of first %d odd numbers = %d",n, sum);
 getch();
 return 0;
 }
