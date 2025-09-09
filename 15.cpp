#include <stdio.h>
#include <conio.h>

    int main()

    {

        int i,n,value,sum=0,mean;

        printf("Enter how many numbers");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            printf("Enter number %d",i);
            scanf("%d",&value);

            sum = sum + value ;
        }

        mean = sum / n ;
        printf("\nsum = %d",sum);
        printf("\nmean = %.2d",mean);

        getch ();
        return 0 ;
    }
