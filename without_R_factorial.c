#include <stdio.h>
int main()
{
    int x ,i ,factorial =1;

    printf("Enter the factorial number :  ");
    scanf("%d", &x);


        for(i=1; i<=x; i++)
        {
            factorial = factorial*i  ;
        }

     printf("%d Factorial is : %d" , x ,factorial);

     return 0;
}

