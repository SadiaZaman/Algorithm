#include <stdio.h>
int main ()
{
    int arr[100] ,minimum , n, i,location = 1 ;
    printf ("enter the number :  ");
    scanf ("%d" ,&n);

    printf ("Enter the integer",n);
            for (i=0 ; i<n ; i++)
                scanf ("%d",& arr [i]);

   minimum = arr[0] ;

     for (i=1 ; i<n ; i++){
        if (arr[i]<minimum){

            minimum = arr[i];
            location = i+1;
        }
    }

    printf("\nMinimum is %d at the location of %d " ,minimum , location);
}




