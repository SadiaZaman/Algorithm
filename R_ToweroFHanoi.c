#include <stdio.h>
int main()
{
    int number;

    printf("Enter the number : ");
    scanf("%d", &number);

    towers(number, 'X', 'Y', 'Z');
    return 0;
}
void towers(int num, char from, char end, char aux)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", from, end);
        return 0;
    }
    towers(num - 1, from, aux, end);
    printf("\n Move disk %d from peg %c to peg %c", num, from, end);
    towers(num - 1, aux, end, from);
}
