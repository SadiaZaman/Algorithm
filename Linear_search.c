#include <stdio.h>
int main ()
{
    int arr[100] ,search , n, i,location = 1 ;
    printf ("enter the number :  ");
    scanf ("%d" ,&n);

    printf ("Enter the integer",n);
            for (i=0 ; i<n ; i++)
                scanf ("%d",& arr [i]);

    printf ("enter the Search number :  ");
    scanf ("%d" ,&search);

    for (i=0 ; i<n ; i++)
    {
        if (arr[i]==search){

             printf ("Find the number %d is at the location %d \n", search ,i+1);
             break ;
        }

      else {
        printf("%d is not present" , search);
        break ;}

    }
}
