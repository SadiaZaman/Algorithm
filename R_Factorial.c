#include <stdio.h>
int main()
{
    int x ,result;

    printf("Enter the factorial number :  ");
    scanf("%d", &x);

    result = factorial (x);

     printf("%d Factorial is : %d" , x ,result);

     return 0;
}

int factorial (int x)
{

    if (x==0)
    {
       return 1;
    }

    else
    {

        return x *factorial(x-1);
    }

}
