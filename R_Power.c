#include <stdio.h>
int main ()

{

    int x, y ,result;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    result = power(x, y);
    printf("%d^%d = %d", x, y, result);

    return 0;
}


int power(int x, int y)
{

    if(y == 0)
    {
        return 1;
    }

    else
    {

        return x * power(x, y - 1);
    }

}




