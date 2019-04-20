#include <stdio.h>
int main()
{

    int n, r ,result ;
    printf("Enter the numbers :\n");
    scanf("%d %d", &n ,&r);

    result =Combination(n,r);
    printf("Combination is %d" ,result);
}

int Combination (int n,int r)
{

    if (r==1){
        return n;
    }

    else if (n==r){
        return 1;
    }

    else
        return (Combination(n-1,r)+Combination(n-1,r-1));
}
