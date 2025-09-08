#include<stdio.h>
#include<conio.h>

	void main()

 {
  int n , i = 0 ,sum;
  clrscr();

	printf("Enter value of n");
	scanf("%d",&n);

	while(i <= n)
   {
	printf("%d",n);
	sum = sum+i;
	i++ ;
   }
	printf("sum of first %d numbers = %d",n,sum);
 getch();
}