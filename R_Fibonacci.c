#include<stdio.h>

int Fibonacci(int);

int main()
{
   int n, i = 0, result ,c;

    printf("Enter fibonacci Number: ");
    scanf("%d",&n);

    result = Fibonacci( n);
    printf("fibonacci Number %d" , result);

  /*  for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
    i++;
   }*/


   return 0;
}

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}