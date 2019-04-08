#include <stdio.h>
int main ()

{

    int x, y ,result ,i;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    result = 1;

    for (i= 1 ;i<=y ;i++){

        result = result *x ;
    }
    printf("%d",result);

    return 0;
}
